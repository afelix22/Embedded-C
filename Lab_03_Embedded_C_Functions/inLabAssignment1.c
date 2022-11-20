#include <stdio.h>

void checkC(char chr)
{
    if (chr >= 48 && chr <= 57)
    {
        printf("The character is numeric.");
    }
    else if (chr >= 65 && chr <= 90)
    {
        printf("The character is in uppercase.");
    }
    else if (chr >= 97 && chr <= 122)
    {
        printf("The character is in lowercase.");
    }
    else
    {
        printf("The character is alphanumeric");
    }
}

int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);
    checkC(chr);

return 0;
}
