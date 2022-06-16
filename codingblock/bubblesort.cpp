#include<iostream>
using namespace std;
int main()
{
    int n, i, j, temp,count=1;
    cin>>n;
    int arr[n];
    for(i=0; i<=n-1; i++)
        cin>>arr[i];
    for(i=0; i<=(n-2); i++)
    {
        for(j=0; j<=(n-i-2); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                count++;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}