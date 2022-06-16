#include <stdio.h>
int main() {
int i, sum=0, n=10;
for(i=1;i<=n;i++){
    sum=n*i;
    printf("%d*%d=%d\n",n,i,sum);
}

return 0;
}