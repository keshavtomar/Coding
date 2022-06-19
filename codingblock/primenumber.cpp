#include<iostream>
using namespace std;
int main()
{   
int number,temp2;
cin>>number;
int c=2;
    while(number>1)
    {
        if(number%c==0){
            temp2=c;
        cout<<c<<" ";
        number/=c;
        }
        else c++;
    }
    return 0;
}