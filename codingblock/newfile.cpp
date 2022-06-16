#include<iostream>
using namespace std;
int main()
{
    int i=3,n,sum=0;
    int a=0,b=1;
    cin>>n;
        if (n==1)
        {
            cout<<0;
            
        }
        if (n==2)
        {
            cout<<1;
        
        }

        while (i<=n)
    {
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }
    cout<<sum;
    return 0;
}