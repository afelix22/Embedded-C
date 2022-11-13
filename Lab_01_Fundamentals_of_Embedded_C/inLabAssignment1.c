#include <stdio.h>

int main(){

    int hrs = 0, mins = 0;
    float secs = 0;

    printf("Enter Hours:\n");
    scanf("%d", &hrs);
    printf("Enter Minutes:\n");
    scanf("%d", &mins);
    printf("Enter Seconds:\n");
    scanf("%f", &secs);

    printf("The entered time is: %d hours %d minutes %f seconds", hrs, mins, secs);

    return 0;

}
