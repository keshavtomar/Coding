#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,total=0;
    cin>>n;
    int arr[n];
    // taking input
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }   
    
    // now checking all the setbits of xor array and counting them position wise
    for (int i = 0; i <= 31; i++)
    {
        int count1=0,count0=0;
        long long int pairs=0;
        for (int j = 0; j <n; j++)
        {
            if (arr[j]&(1<<i))
            {
                count1++;
                cout<<count1<<"  ";
            }
            else
            {
                count0++;
            }
        }
        pairs=count1*count0;
        // cout<<pairs<<endl;
        total+=pairs*pow(2,i);
    }
    cout<<total<<endl; 
   return 0; 
}