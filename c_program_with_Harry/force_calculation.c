#include <stdio.h>
float force(float mass);
int main() {
float x;
printf("Provide the mass of body in kg \n");
scanf("%f",&x);
printf("The value of Force is %f N\n",force(x));
return 0;
}
float force(float mass){
float g=9.8;
float value = mass*g;
return value;
}