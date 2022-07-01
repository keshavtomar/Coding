#include<iostream>
#include <algorithm>

using namespace std;
int main()
{
    int arr1[3]={2,3,4};
    int arr2[3]={2,3,4};
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<3; i++) 
    xor1^=arr1[i];
    for(int i=0; i<3; i++) 
    xor2^=arr2[i];
    cout<<(xor1&xor2);
    return 0;
}