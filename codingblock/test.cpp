#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,unit,sum=0,position=0;
    cin>>n;
    while (n!=0)
    {
        unit=n%10;//2
        if (unit==0)
        {
            unit=5;
        }
        sum=sum+(unit*pow(10,position));
        n=n/10;
        cout<<sum<<endl;
        position++;
    }
    cout<<sum<<endl;
    
    return 0;
}