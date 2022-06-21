#include<iostream>
using namespace std;
int main()
{
    int number,power;
    cin>>number;
    cin>>power;
    int answer=1;
    for(int i=1;i<=power;i++){
    answer=answer*number;
    }
    cout<<answer;
    return 0;
}