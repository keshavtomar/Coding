#include<iostream>
using namespace std;
int main()
{
    int number,answer=0,pow=10;
    cin>>number;
    for(int i=0;i<number;i++){
    while (number!=0)
    {
        int remainder=number%10;
    answer=answer*pow+remainder;
    number=number/10;
    }
    }
    cout<<answer;
    return 0;
}