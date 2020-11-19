#include<iostream>
using namespace std;
int main()
{
int a=10;
int *p;
p=&a;
cout<<a<<endl;
cout<<p<<endl;
int **q;
q=&p;
cout<<p<<endl;
cout<<q<<endl;
    return 0;
}
/** Output
10
0x61ff08
0x61ff08
0x61ff04  **/

