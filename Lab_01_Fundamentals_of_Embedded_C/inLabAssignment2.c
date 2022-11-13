#include <stdio.h>

int main(){

    int x = 0, sum = 0;

    printf("Enter First number: ");
    scanf("%d", &x);
    sum += x;
    printf("Enter Second number: ");
    scanf("%d", &x);
    sum += x;
    printf("Enter Third number: ");
    scanf("%d", &x);
    sum += x;
    printf("Enter Fourth number: ");
    scanf("%d", &x);
    sum += x;
    printf("Enter Fifth number: ");
    scanf("%d", &x);
    sum += x;

    printf("\nThe mean of all integers entered is: %0.2f \n", sum/5.00);

    return 0;
}
