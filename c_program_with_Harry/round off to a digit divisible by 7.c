#include <stdio.h>
int main() {
int a;
int b;
int c;
printf("Provide the value of integer\n");
scanf("%d",&a);
b=a%7;
if(b==0)
printf("Value of nearest integer divisible by 7 is %d\n",a);
else
c=a-b+7;
printf("Nearest digit to your number which is divisible by 7 is %d\n",c);
return 0;
}