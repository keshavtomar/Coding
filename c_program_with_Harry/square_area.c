#include <stdio.h>
#include <math.h>
int main() {
float side;
printf("provide the value of side of square\n");
scanf("%f",&side);
float area=pow(side,2);
printf("Area of square is %f",area);
return 0;
}