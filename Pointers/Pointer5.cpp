//pointer and array
#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30};
int *ptr=arr;
cout<<*arr<<endl;  //10
for(int i=0; i<3; i++) { 
cout<<*ptr<<endl;
ptr++; }
    return 0;
}
/** Output 
10
10
20 
30  **/

