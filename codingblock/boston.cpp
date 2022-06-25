#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int temp1,temp2=0,sum=0,remainder,pfsum=0;
    temp1=number;
    while(temp1!=0)
    {   remainder=temp1%10;
    sum=sum+remainder;
        temp1=temp1/10;
    }
    // cout<<"value of digit sum is "<<sum<<endl;
      int c=2;
      remainder=0;
    while(number>1)
    {
        if(number%c==0){
            temp2=c;
        // cout<<"Prime factors are "<<c<<" "<<endl;
         while(temp2!=0)
    {   remainder=temp2%10;
    pfsum=pfsum+remainder;
        temp2=temp2/10;
    }
        number/=c;
        }
        else c++;
    }
    // cout<<"Value of sum of prime factor is "<<pfsum<<endl;
    if (pfsum==sum)
    {
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
    return 0;
}