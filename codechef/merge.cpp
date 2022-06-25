#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int first[m+n];
    int second[n];
    for(int i=0;i<m;i++){
    cin>>first[i];
    }
    for(int i=0;i<n;i++){
    cin>>second[i];
    first[m+i]=second[i];
    }
    for(int i=0;i<m+n;i++){
    cout<<first[i]<<"  ";
    }

    return 0;
}