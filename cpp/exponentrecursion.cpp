#include<iostream>
int exponent(int,int);
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<exponent(x,y);
    return 0;
}
int exponent(int x,int y){
    if (y==0)
    {
        return 1;
    }
    else{
        return x*exponent(x,y-1);
    }
}