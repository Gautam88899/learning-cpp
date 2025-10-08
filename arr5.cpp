#include<iostream>
using namespace std;



int main()
{
    int n;
    cout <<"Enter the size of the array"<< endl;
    cin>>n;
    int arr[n];
    for (int i= 0;i<n;i++){
        cout<<"Entered the array at"<<" "<<i+1<<endl;
        cin>>arr[i];

    }
    for (int i=0;i<n;i++){
    
        cout<<arr[i]<<" ";
    }
    cout << "reversed array" << endl;
    for(int i = n-1; i>=0; i--){
    
        cout << arr[i]<<" "<<endl;
    }
}