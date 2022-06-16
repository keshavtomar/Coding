#include <stdio.h>
int main() {
int i=8;
int*j=&i;
int**k=&j;
printf("value of i is %d\n",i);
printf("value of i is %d\n",*j);
printf("value of adress of i is %u\n",&i);
printf("value of adress of i is %d\n",j);
printf("value of adress of j is %u\n",&j);
printf("value of  j  is %u\n",*(&j));
printf("value of adress of j is %u\n",&j);
printf("value of adress of j is %u\n",*k);
printf("value of adress of k is %u\n",&k);
return 0;
}