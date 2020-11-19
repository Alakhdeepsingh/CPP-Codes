#include<iostream>
using namespace std;
int main()
{
int a=10;
int *aptr; 
aptr=&a; // 0x61ff08
cout<<aptr<<endl;  //0x61ff08
aptr--;
cout<<aptr<<endl; //0x61ff04
    return 0;
}
/** output
0x61ff08
0x61ff04  **/
