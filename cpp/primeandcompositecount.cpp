#include<iostream>
using namespace std;
int main()
{
    int number=0;
    int composite=0,prime=0;
    cout<<"press -1 to exit\n";
    while (number!=-1)
    {   int flag=0;
        cin>>number;
        if (number==-1)
        {
            break;
        }
        for (int i = 2; i < number/2; i++)
        {
            if(number%i==0)
        {   
            number=number;
           flag=1;
        }
        }
        if (flag==1)
        {
            composite++;
        }
        else{
            prime++;
        }
        
    }
    cout<<composite<<"\t"<<prime<<endl;
    return 0;
}