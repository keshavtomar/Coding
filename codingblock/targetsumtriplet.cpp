#include <iostream>
using namespace std;
int main() {
    int n,a[1000];
    int target;
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
    cin>>target;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==target)
                {
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                }
            }
        }
    }

}

