// #include<iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n,unit,sum=0,position=0;
//     cin>>n;
//     while (n!=0)
//     {
//         unit=n%10;
//         if (unit==0)
//         {
//             unit=5;
//         }
//         sum=sum+(unit*pow(10,position));
//         n=n/10;
//         cout<<sum<<endl;
//         position++;
//     }
//     cout<<sum<<endl;
    
//     return 0;
// }


#include <iostream>
using namespace std;
int main ()
{
    long long int n;    
    cin >> n;

    long long int sum = 0, pow = 1, t;
    do
    {
        t = n%10;        
        if (t == 0)      
            t = 5;       
        sum = sum + t*pow;   
        pow = pow*10;     
        n = n/10;       
    } while (n != 0);
    cout << sum;       
    return 0;
}