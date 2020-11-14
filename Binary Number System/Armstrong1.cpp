//Armstrong numbers
#include<iostream>
using namespace std;
int main()
{
int n;
cin>> n;
int sum=0,org_num=n;
while(n>0) {   //we have to check only one condition that's why we used while loop
int rem =n%10;
sum=sum+rem*rem*rem; //3*3*3=27 +0 =27  //5*5*5 =125   //1*!*!=1
n=n/10;}
if(org_num==sum)
{
    cout<<"armstrong number"<<endl;
}
else {
    cout<<"not armstrong"<<endl;
}
    return 0;
}

