#include <stdio.h>
int main() {
int i,number;
printf("provide the value of number upto which you want to print the natural number\n");
scanf("%d",&number);
for(i=1;i<=number;++i){
printf("Your natural number is %d\n",i);
}
return 0;
}