#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, i, j, temp;
    cin>>n;
    int arr[n];
    int initial_array[n];
    int initial_position[n];
    for(i=0; i<=n-1; i++){
        cin>>arr[i];
        initial_array[i]=arr[i];
       const int initial_position[i]={i};
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" "<<i<<"   ";
    }
    cout<<endl;
     for (int i = 0; i < n; i++)
    {
      cout<<initial_array[i]<<" ";
      cout<<initial_position[i]<<"   ";
    }
    return 0;
}