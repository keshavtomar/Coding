#include <stdio.h>
int main() {
int sub1,sub2,sub3;
printf("Enter physics marks: \n");
scanf("%d",&sub1);
printf("Enter chemistry marks: \n");
scanf("%d",&sub2);
printf("Enter mathematics marks: \n");
scanf("%d",&sub3);
float total;
total= (sub1+sub2+sub3)/3;
if ((total<40) || sub1<33 || sub2<33 || sub3<33)
{
    printf("sorry!!You are fail and Your total percentage is %f\n",total);
}
else
    printf("Hurray!!you are pass and Your total percentage is %f\n",total);

    getchar();
return 0;
}