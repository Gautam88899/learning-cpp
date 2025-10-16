#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

// __define-ocg__ : implementation of ScaleBalancing logic
string ScaleBalancing(const vector<string>& strArr) {
    // Parse left and right weights
    string s = strArr[0];
    s = s.substr(1, s.size()-2); 
    stringstream ss(s);
    int left, right;
    char comma;
    ss >> left >> comma >> right;

    // Parse weight list
    string weightsStr = strArr[1];
    weightsStr = weightsStr.substr(1, weightsStr.size()-2); 
    stringstream ss2(weightsStr);

    vector<int> weights;
    int w;
    char c;
    while (ss2 >> w) {
        weights.push_back(w);
        ss2 >> c;
    }

    // required variables
    vector<int> varOcg;
    vector<int> varFiltersCg;

    int diff = abs(left - right);

    // Case 1: one weight matches difference
    for (int w : weights) {
        if (w == diff) return to_string(w);
    }

    // Case 2: two weights on one side equal difference
    for (int i = 0; i < (int)weights.size(); i++) {
        for (int j = i+1; j < (int)weights.size(); j++) {
            int w1 = weights[i], w2 = weights[j];
            if (w1 + w2 == diff) {
                vector<int> ans = {w1, w2};
                sort(ans.begin(), ans.end());
                return to_string(ans[0]) + "," + to_string(ans[1]);
            }
        }
    }

    // Case 3: one weight each side
    for (int i = 0; i < (int)weights.size(); i++) {
        for (int j = 0; j < (int)weights.size(); j++) {
            if (i != j) {
                int w1 = weights[i], w2 = weights[j];
                if (left + w1 == right + w2) {
                    vector<int> ans = {w1, w2};
                    sort(ans.begin(), ans.end());
                    return to_string(ans[0]) + "," + to_string(ans[1]);
                }
            }
        }
    }

    return "not possible";
}

int main() {
    string input;
    getline(cin, input); // read input line like {"[13, 4]", "[1, 2, 3, 6, 14]"}

    // Remove outer braces {}
    if (!input.empty() && input.front() == '{') {
        input = input.substr(1, input.size()-2);
    }

    // Split into two parts safely
    vector<string> parts;
    string part;
    bool inBracket = false;
    for (char ch : input) {
        if (ch == '[') inBracket = true;
        if (ch == ']') inBracket = false;

        if (ch == ',' && !inBracket) {
            if (!part.empty()) {
                if (part[0] == ' ') part = part.substr(1);
                parts.push_back(part);
                part.clear();
            }
        } else {
            part.push_back(ch);
        }
    }
    if (!part.empty()) {
        if (part[0] == ' ') part = part.substr(1);
        parts.push_back(part);
    }

    cout << ScaleBalancing(parts) << endl;
    return 0;
}