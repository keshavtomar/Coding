#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   int count[64]={0};
    for (int j = 0; j < n; j++)
    {
        int i=0;
        int number=arr[j];
        while (number>0)
        {
            count[i]=count[i]+(number&1);
            i++;
           number=number>>1;
        }
    }
        int power=1;
        int answer=0;
        for (int i = 0; i < 64; i++)
        {
            count[i]=count[i]%3;
            answer=answer+(count[i]*power);
             power=power*2;
        }
        cout<<answer<<"  ";
    
    
    
    
    return 0;
}