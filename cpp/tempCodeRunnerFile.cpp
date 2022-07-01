#include <bits/stdc++.h>
using namespace std;
long long int sumXOR(int arr[], int n)
{
    long long int sum = 0;
    for (int i = 0; i < 32; i++)
    {
        int zc = 0, oc = 0;    
        long long int idsum = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
                zc++;
            else
               { oc++;
               }
            arr[j] /= 2;
        }
        idsum = oc * zc * (1 << i);   
        sum += idsum;
    }
    return sum;
}
int main()
{
    long long int sum = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sum = sumXOR(arr, n);
    cout << sum;
    return 0;
}