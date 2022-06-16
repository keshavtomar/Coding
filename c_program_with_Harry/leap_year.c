#include <stdio.h>
int main() {
int year;    
printf("Provide the year which you want to check:\n");
scanf("%f",&year);
int mod=year%4||year%100||year%400;
if (mod==0)
{
    printf("It's a leap year/n");
}
else{
printf("It's not a leap year!!\n");
}
return 0;
}