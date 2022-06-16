#include <stdio.h>
#include<math.h>
int main() {
int i,num,factorial=1;
printf("Provide the number upto which factorial is to be find \n");
scanf("%d",&num);
/* IT IS USING FOR LOOP
for (i=1 ; i<=num ; i++)
{
    factorial=factorial*i;
}
printf("Value of factorial %d is %d\n",num,factorial);
*/
/*USING WHILE LOOP */
i=1;
while (i<=num)
{
     factorial=factorial*i;
    i++;
}
 printf("Value of factorial %d is %d\n",num,factorial);
return 0;
}
