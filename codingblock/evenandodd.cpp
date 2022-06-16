#include<iostream>
using namespace std;
int main()
{
    int n,remainder;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n ;i++)
    {
       int number=arr[i];
      int  even_sum=0,odd_sum=0;
    while (number!=0)
    {
       remainder=number%10;
       if (remainder%2==0)
       {
        even_sum=even_sum+remainder;
       }
       else{
        odd_sum+=remainder;
       }
       number=number/10;
       
    } 
    if (even_sum%4==0 || odd_sum%3==0)
    {
        cout<<"Yes"<<endl;
    }
       else{
        cout<<"No"<<endl;
       }
    }
    
    
    return 0;
}