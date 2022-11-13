#include <stdio.h>

int main()
{
    int x;

    printf("Enter a 3-digit integer: ");
    scanf("%d", &x);

    if (x > 99 && x < 1000){
        printf("\nThe number in reverse is: %d%d%d", (x % 100 % 10), (x % 100 / 10), (x / 100));
    } else{
        printf("\nEnter a 3-digit integer only.\n");
    }
    return 0;
}
