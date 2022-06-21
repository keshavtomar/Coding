#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i==1)
        {
            cout<<"$";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j<n+2 ; j++)
        {
            if (i==j)
            {
                cout<<"$";
            }
            else if (j==2||j==n+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i==n)
        {
            cout<<"$";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
    return 0;
}