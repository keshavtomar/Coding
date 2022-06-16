#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    int largest= INT_MIN;
    while (i<=n-1)
    {
        cin>>arr[i];
        i++;
    }
    int j=0;
    while (j<=n-1)
    {
        if (arr[j]>largest)
        {
            largest=arr[j];
        }
        j++;
        
    }
    cout<<"Largest no is\t"<<largest<<endl;
    return 0;
}