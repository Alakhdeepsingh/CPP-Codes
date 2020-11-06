#include<iostream>
using namespace std;
int main()
{
int n1=0,n2=1,n3,i,number;
cin>>number;
cout<<"Enter hte numbers of elements";
for(i=2; i<number; i++)
{
    n3=n1+n2;
    cout<<n3<<endl;
    n1=n2;
    n2=n3;
}
    return 0;
}

