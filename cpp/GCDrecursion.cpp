#include<iostream>
using namespace std;
int GCD(int,int);
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<GCD(a,b);
    return 0;
}
int GCD(int x,int y){
    int rem=x%y;
    if (rem==0)
    {
        return y;
    }
    else{
        return GCD(y,rem);
    }
    
}