#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
int number,guess,nguesses=1;
srand(time(0));
number=rand()%100+1;//Generate random number bw 1 to 100
//printf("The number is %d\n",number);
//keep running the loop until the number is guessed
do
{
    printf("Guess the number between 1 to 100\n");
    scanf("%d",&guess);
    if (guess>number)
    {
        printf("Your guess is greater than the real number!! TRY AGAIN \n");
    }
    else if (guess<number)
    {
        printf("Your guess is less than the real number!! TRY AGAIN \n");  
    }
    else
    {
       printf("You guess the number in %d attempts\n",nguesses);
    }
    nguesses++;
} while (guess!=number);

return 0;
}