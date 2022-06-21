#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int answer=1;
    while (n>1)
    {
        answer=answer*n;
        n--;
    }
    cout<<answer;
    return 0;
}