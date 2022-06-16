#include <stdio.h>
float average(float a, float b, float c);
int main() {
    float a,b,c;
    printf("Provide the value of a\n");
    scanf("%f",&a);
    printf("Provide the value of b\n");
    scanf("%f",&b);
    printf("Provide the value of c\n");
    scanf("%f",&c);
printf("Value of average is %f\n",average(a,b,c));
return 0;
}
float average(float a, float b, float c){
float x;
x=(a+b+c)/3;
return x;
} 
