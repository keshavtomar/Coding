#include <stdio.h>
int main() {
int age;
printf("Provide your age\n");
scanf("%d" ,&age);
if(age<=70 && age>=18)
{printf("Heyy buddy you are fit and ready to rock on road!!\n");
}
else 
{
printf("You can not drive first grow up bro!!\n");
}
return 0;
}