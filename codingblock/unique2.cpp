#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   int xor_result=0;
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
    xor_result=arr[i]^xor_result;
   }
   int rightbit=xor_result & ~(xor_result-1);
   int x=0,y=0;
    for (int i = 0; i < n ; i++)
    {
        if (rightbit&arr[i])
        {
            x=x^arr[i];
        }
        else
        y=y^arr[i];
    }
    if (x<y)
    {
    cout<<x<<" "<<y;
    }
    else{
    cout<<y<<" "<<x;
    }
    
   
    return 0;
}