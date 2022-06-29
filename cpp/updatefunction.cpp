#include<iostream>
using namespace std;
void update(int x){
    x=x+10;
    cout<<"value of x in the calling function is:"<<" "<<x<<endl;
}
int main()
{
    int x;
    cin>>x;
    cout<<"value of x before updation is: "<<x<<endl;
    update(x);
    cout<<"value of x after updation is: "<<x<<endl;
    return 0;
}