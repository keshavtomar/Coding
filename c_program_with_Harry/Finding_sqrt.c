#include <stdio.h>
#include<math.h>
int main() {
float root_1,root_2, discriminant ,a ,b ,c, new_value_1,new_value_2;
printf("Provide the value of a\n");
scanf("%f",&a);
printf("Provide the value of b\n");
scanf("%f",&b);
printf("Provide the value of c\n");
scanf("%f",&c);
discriminant=b*b-4*a*c;
new_value_1=-b+sqrt(discriminant);
root_1=new_value_1/(2*a);
new_value_2=-b-sqrt(discriminant);
root_2=new_value_2/(2*a);
printf("Value of your roots are: %f \n",root_1);
printf("Value of your roots are: %f \n",root_2);
getchar();
return 0;
}