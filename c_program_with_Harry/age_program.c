#include <stdio.h>
int main()
{
    int age;
    printf("provide the age of candidate\n");
    scanf("%d", &age);
    if (age >= 18)
        printf("congrats you are above 18 hence ready to rock on roads!!\n");
    else
        printf("you are below 18 hence be ready for a fine if you ride!!\n");
    return 0;
}