#include<iostream>
using namespace std;
int main(){

    int n,sum=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=1;i<=n;i++){
        cout<<"enter the array at position"<<" "<<i<<endl;
        cin>>arr[i];

    }
    cout<<"you enterd : ";
    for (int i=1;i<=n;i++ ){
        cout<<arr[i]<<" ";
        
    }
    
     for (int i=1;i<=n;i++ ){
         sum=sum+arr[i];
         cout<<sum;

     }
     cout<<"the sum of the array is"<<" "<<sum;
    
}