
#include<iostream>
using namespace std;
int main ()
{
    int number ,remainder,reversednumber=0;
    cout<<"enter the number"<<endl;
    cin>>number;
    while(number!=0)
    {
        remainder =number%10;
        number=number/10;
        reversednumber=(reversednumber*10)+remainder;
    }
    cout<<"the reversed number is "<<reversednumber<<endl;

}