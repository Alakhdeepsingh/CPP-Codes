//implement a simple calculator
#include<iostream>
using namespace std;
int main()
{
float n1,n2;
cout<<"input 2 nmber";
cin>>n1>>n2;
char op;  
cout<<"input an operator"; //op-operator
switch (op)
{
    case '+':
    cout<<n1+n2<<endl;
    case '-':
    cout<<n1-n2<<endl;
    case '*':
    cout<<n1*n2<<endl;
    case '/':
    cout<<n1/n2<<endl;
    default:
    cout<<"enter another operator";
    break;
}
    return 0;
}

