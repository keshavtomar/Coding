#include<iostream>
using namespace std;
int update(int b){
    b=b+100;
    cout<<b<<endl;
    return b;
}
int main()
{   int b;
    int a;
    cin>>a;
    cout<<"value of a is:"<<a<<endl;
    update(a);
    cout<<a<<endl;
    cout<<a<<endl;
    return 0;
}