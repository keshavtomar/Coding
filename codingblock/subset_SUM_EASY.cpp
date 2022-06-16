#include<iostream>
using namespace std;
bool subset(long long int a[],long long int n)
{
    long long int i,j,sum=0,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {   sum=0;
            for(k=i;k<=n-2;k++)
            {
                sum=sum+a[k];
            }
            if(sum==0) return true;
        }
        
    }
    return false;
}
int main ()
{
    long long int m=100000;
    long long int a[m],n,p,i;
    cin>>p;
    for(i=1;i<=p;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>a[j];
        if(subset(a,n))
            cout<<"Yes";
        else
            cout<<"No";
    }
}
