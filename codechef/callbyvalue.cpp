#include<iostream>
using namespace std;
int update(int b){
    b=b+100;
    cout<<b<<endl;
    return b;
}
int main()
{
    int a;
    cin>>a;
    cout<<"value of a is:"<<" "<<a<<endl;
     int *b=&a;
    // update(a);
    cout<<*(&a)<<endl;
    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    return 0;
}
