#include<iostream>
using namespace std;
int main()
{
    int n,count_1=0,count_0=0;
    cin>>n;
    while (n!=0)
    {
        int unit=n&1;
    if (unit==1)
    {
        count_1++;
        
    }  
    // else{
    //     count_0++;
    // }
    n=n>>1;
    }
    
    // cout<<"no of 0 are: "<<count_0<<endl;
    cout<<count_1;
    return 0;
}