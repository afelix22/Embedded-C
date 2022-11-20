#include <stdio.h>

int main()
{
    float x;

    printf("Enter a real number: ");
    scanf("%f", &x);

    if(3 <= x && x < 8.5)
    {
        printf("%.0f Matches Conditions: A,", x);
    }
    else
    {
        printf("%.0f Matches Conditions: not A,", x);
    }
    if(x < 3 || 5.4 < x && x < 7.3 || x > 13)
    {
        printf(" B,");
    }
    else
    {
        printf(" not B,");
    }
    if(x != 3 && x <9.75)
    {
        printf(" C\n");
    }
    else
    {
        printf(" not C\n");
    }

    return 0;
}
