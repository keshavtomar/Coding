#include<iostream>
using namespace std;
int main()
{
    int number,flag=0;
    cin>>number;
    for (int i = 2; i < number/2; i++)
    {
        if (number%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        cout<<"composite number\n";
    }
    else{
        cout<<"Prime number\n";
    }
    
    return 0;
}