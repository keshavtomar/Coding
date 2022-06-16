#include<iostream>
using namespace std;
int main()
{
    // datatype nameofarray [];
  int arr[10];
  int i=0;while (i<=9)
  {
     cin>>arr[i];
     i++;
  }
  int j=9;
  while (j>=0)
  {
    cout<<arr[j];
    j--;
  }
  
 

    return 0;
}