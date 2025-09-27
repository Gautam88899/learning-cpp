#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number "<<endl;
    cin>>a;
    cout<<"enter the second  number "<<endl;
    cin>>b;
    cout<<"the number before swapping"  <<a <<b <<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"the number after swapping"  <<a <<b <<endl;
    
}