#include <iostream>
using namespace std;
int main() {
    int n,a[1000];
    int target;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j < n-i-1; j++)  
        {
           if (a[j] > a[j+1])
           { 
              int temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
           }
        }
    }
    int temp1,temp2;
    cin>>target;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {    
            if(a[i]+a[j]==target)
            {
                temp1=a[i];
                temp2=a[j];
            }
        }
    }
    cout<<"Deepak should buy roses whose prices are "<<temp1<<" and "<<temp2;
    }
    return 0;
}

