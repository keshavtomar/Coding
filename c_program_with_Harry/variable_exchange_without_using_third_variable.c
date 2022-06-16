#include <stdio.h>
int main() {
int a=10;
int b=20;
printf("Before interchanging\n");
printf("%d %d",a,b);
a=a+b;
b=b-a;
a=a-b;
printf("\nAfter interchanging\n");
printf("%d %d ",a,b);

return 0;
}