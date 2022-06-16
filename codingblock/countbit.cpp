#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        int number=arr[i];
        int count_1=0;
         while (number!=0)
    {
        int unit=number&1;
    if (unit==1)
    {
        count_1++; 
    }  
    number=number>>1;
    }
    cout<<count_1<<endl;
    }
    
    return 0;
}