#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character";
    cin>>button;
switch (button)
{
    case 'a':
    cout<<"hello"<<endl;
    break;
    case 'b':
    cout<<"namaste"<<endl;
    break;
    case 'c':
    cout<<"satsrikal"<<endl;
    break;
    case 'd':
    cout<<"salut"<<endl;
    break;
default:
cout<<"i am still learning more"<<endl;
  break;
}
    return 0;
}

