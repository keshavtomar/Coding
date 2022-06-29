#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r))<<endl;
    return 0;
}
int factorial(int n){
    for (int i = n-1; i >0; i--)
    {
        n=n*i;
    }
    return n;      
}