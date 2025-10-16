#include<iostream>
using namespace std;
  void prime(int a){
    int count =0;
    for (int i=1 ; i<=a;i++){
        
        if(a%i==0){
            count=count+1;
        }

         
    }

    if (count==2){
        cout<<"the number is prime number";
    }
    else{
        cout<<"the number is not prime";
    }



}
int main()
{
    int number;
    cout<<"enter the number to check"<<endl;
    cin>>number;
     prime(number);
     


}