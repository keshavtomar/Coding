#include <stdio.h>
int main() {
int celsius;
 int farnehite;
printf("Provide the temprature value in celsius\n");
scanf("%d",&celsius);
farnehite=(9.0/5)*(celsius)+32;
printf("The value of the temprature provided by you in celsius is %d farnehite",farnehite);
return 0;
}