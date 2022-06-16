#include <iostream>
using namespace std;
int main(){
    int n,i=1,rem,temp,dec,b=1,number;
printf("provide the count of number");
while (i<=n)
{
    scanf("%d",&n);
    cin>>number;
    if (number>0)
    {
        rem = number % 10;
        dec = dec + rem * b;
        b *= 2;
        number /= 10;
    }
    cout<<dec;
    i++;
}


return 0;
}
