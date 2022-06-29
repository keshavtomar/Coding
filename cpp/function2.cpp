#include<iostream>
using namespace std;
int update(int y){
    y=y+10;
    cout<<"value of x in the calling function is:"<<" "<<y<<endl;
    return y;
}
int main()
{
    int x;
    cin>>x;
    cout<<"value of x before updation is: "<<x<<endl;
    update(x);
    cout<<"value of x after updation is: "<<x<<endl;
    cout<<update(x)<<endl;
    return 0;
}