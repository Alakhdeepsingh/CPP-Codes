#include<iostream>
using namespace std;
int main()
{
int a=10;
int *aptr =&a;
cout<<aptr<<endl; 
//address of a will store in *aptr
aptr++;
cout<<aptr<<endl;  //in address 4 will be added as it is of int type    return 0;
}
/**  output
0x61ff08
0x61ff0c  **/

