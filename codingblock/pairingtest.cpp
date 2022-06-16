#include<iostream>
using namespace std;
int main()
{
    int n,num,i=1,ans=0;
    cout<<"number of odd integers"<<endl;
    cin>>n;while (i<=n)
    {
        cout<<"Provide the input"<<endl;
        cin>>num;
        ans=ans^num;

        i++;
    }
    cout<<"The number which is not in pair is: "<<ans;
    

    return 0;
}