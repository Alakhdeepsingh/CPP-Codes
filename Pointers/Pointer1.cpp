#include<iostream>
using namespace std;
int main()
{
int a=13;
int *aptr;
aptr=&a;
cout<<&a<<endl;
cout<<aptr<<endl;
cout<<*aptr<<endl;
    return 0;
}
/** Output
0x61ff08
0x61ff08
13  **/
