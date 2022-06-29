// pointer is a datatype which store the address of a variable
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int *y=&x;
    int* *z=&y;
    // int *k=NULL;
    // cout<<"value of x is: "<<x<<endl;
    // cout<<"value of &x is: "<<&x<<endl;
    // cout<<"value of y is: "<<y<<endl;
    // cout<<"value of &y is: "<<&y<<endl;
    //  cout<<"value of z is: "<<z<<endl;
    // cout<<"value of &z is: "<<&z<<endl;
    
// derefrencing of pointer
// cout<<*y<<endl;
// cout<<*z<<endl;
// cout<<**z<<endl;
cout<<y<<endl;
cout<<y+1<<endl;
cout<<*y<<endl;
cout<<*y+1<<endl;
    return 0;
}