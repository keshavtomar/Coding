#include <stdio.h>
int main() {
int number;
int i=1;
printf("Provide the number to which natural number is to be print\n");
scanf("%d",&number);
do
{
    printf("Your number is %d\n",i);
    i++;
} while (i<=number);

return 0;
}