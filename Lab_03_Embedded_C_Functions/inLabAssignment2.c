/* Instead of using integer to calculate for the area and perimeter of the rectangle.
The integer data type is replaced with float to calculate decimal inputs*/

#include <stdio.h>

void calc(float len, float wid)
{
    float a, p;
    a = len*wid;
    p = 2*(len+wid);
    printf("\nThe area is %.1f and the perimeter is %.1f \n", a, p);
}

int main()
{
    float len, wid;

    printf("Enter the Length: ");
    scanf("%f", & len);
    printf("Enter the Width: ");
    scanf("%f", & wid);
    calc(len, wid);
}
