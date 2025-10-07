#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the size of the aray";
    cin>>n;
    int arr[n];
    for (int i= 0;i<=n;i++){
        cout<<"enter the arrays"<<" "<<i<<endl;
        cin>>arr[i];

    }
    for (int i=0;i<=n;i++){
    
        cout<<arr[i]<<" ";
    }
}