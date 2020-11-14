#include<iostream>
using namespace std;
int a=10 //outside the function - global variable
int main()
{
    int i=1; //inside the function - local variable
while (i<10)
{
    cin>>i;
    cout<<hello world;
    i++;
}
    return 0;
}
