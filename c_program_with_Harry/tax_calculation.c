#include <stdio.h>
int main() {
float tax,income;
printf("Provide the value of income in lakhs \n");
scanf("%f",&income);
if(income<2.5)
{
    printf("Tax that would be paid is 0 rupees\n");
}
else if((income>=2.5)&&income<5)
{
    tax=5*income;
    printf("Tax that would be paid is %f thousand rupees\n",tax);
}
else if((income>=5)&&income<10)
{
    tax=20*income;
    printf("Tax that would be paid is %f thousand rupees\n",tax);
}
else
{   
    printf("Tax that would be paid is %f thousand rupees\n",tax);
}
return 0;
}