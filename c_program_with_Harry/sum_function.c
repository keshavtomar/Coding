#include <stdio.h>
int sum(int a,int b);
int main() {
    int a,b;
    printf("provide value of a,b\n");
    scanf("%d\n %d",&a,&b);
sum(a,b);
return 0;
}
int sum(int a, int b){
    int result = a+b;
printf("value of your sum is %d\n",result);
return result;
}
