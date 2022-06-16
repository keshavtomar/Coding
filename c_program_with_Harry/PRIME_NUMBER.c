#include <stdio.h>
int main() {
//This is a Data structure problem
int i,n;
printf("Provide the value of number:\n");
scanf("%d",&n);
for(i=2;i<n;i++)
    if (n%i==0)
    {
        printf("It is not a prime number\n");
        break;
    }
    else
       { printf("It is a prime number\n");
        break;
       }
return 0;
}