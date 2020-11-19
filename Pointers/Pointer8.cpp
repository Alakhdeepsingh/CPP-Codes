/** #include<iostream>
using namespace std;
void swap(int a, int b) { 
int temp=a;
a=b;
b=temp;
}
int main()
{
int a=4;
int b=8;
swap(a,b);
cout<<a<<endl;
cout<<b<<endl;
    return 0;
}
Output
4
8 **/

#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
int a=4;
int b=8;
int *aptr=&a;
int *bptr=&b;
swap(aptr,bptr);
cout<<a<<endl;
cout<<b<<endl;
    return 0;
}
/** output
8
4  **/


