#include<iostream>
using namespace std;

int sum(int a, int b)//declaration
{
    int answer=a+b;
    cout<<answer<<endl;//definition
    return answer;
}
int main()
{
    int x,y;
    cin>>x>>y;
    sum(x,y);
    // cin>>x>>y;
    // sum(x,y);
    // sum(x,y);
    // cout<<answer;
    cout<<sum(x,y)<<endl;
    return 0;
}