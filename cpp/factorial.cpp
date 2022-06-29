#include<iostream>
using namespace std;
int factorial(int n){
    for (int i = n-1; i >0; i--)
    {
        n=n*i;
    }
    return n;
}
int main()
{
    int x;
    cin>>x;
    cout<<factorial(x)<<endl;
    return 0;
}