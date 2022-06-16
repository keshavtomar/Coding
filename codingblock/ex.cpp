#include<iostream>
using namespace std;
int main()
{
    int a=20,b=-1,c=1,d=0;
    if(a==20&&b++&&--c){
        cout<<"hello"<<endl;
    }
    else if (b--&&c++&&d--)
    {
        cout<<"coding"<<endl;
    }
    else if (a++&&b--&&--c&&d++)
    {
        cout<<"block"<<endl;
    }
    else{
        cout<<"padai kar lo"<<endl;
    }
    cout<<a<<b<<c<<d;
    return 0;
}