#include<iostream> 
using namespace std;
int main ()
{
    int n1,n2;
    char op;


    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number "<<endl;
    cin>>n2;
    cout<<"enter the operator"<<endl;
    cin>>op;
    switch (op){
        case '+':
        cout<<"the sum is "<<n1+n2;
        break;
        case '-':
        cout<<"the diffrence is "<<n1-n2;
        break;

        case '*':
        cout<<"the multiplication is "<<n1*n2;
        break;

        case '/':
        cout<<"the division is "<<n1/n2;


    }
}