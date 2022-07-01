#include<iostream>
int fib(int);
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    
    int fibonicci=fib(n);
    cout<<fibonicci<<" ";
    
    
    return 0;
}
int fib(int x){
    if (x==0)
    {
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return (fib(x-1)+fib(x-2));
    }
}