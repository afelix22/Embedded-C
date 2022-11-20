#include <stdio.h>

int isLeapYear(int year)
{
    if (year % 400 == 0 || year % 4 == 0)
    {
        return 1;
    }
    else if (year % 100 == 0)
    {
        return 0;
    }
}

int numberofDays(int month, int year)
{
    if(month==1)
    {
        return 31;
    }
    else if(month==2)
    {
        if(isLeapYear(year))
        {
            return 29;
        }
        return 28;
    }
    else if(month==3)
    {
        return 31;
    }
    else if(month==4)
    {
        return 30;
    }
    else if(month==5)
    {
        return 31;
    }
    else if(month==6)
    {
        return 30;
    }
    else if(month==7)
    {
        return 31;
    }
    else if(month==8)
    {
        return 31;
    }
    else if(month==9)
    {
        return 30;
    }
    else if(month==10)
    {
        return 31;
    }
    else if(month==11)
    {
        return 30;
    }
    else if(month==12)
    {
        return 31;
    }
}

int main()
{
    int year, month;
    int isLeapYear(int year);
    int numberofDays(int month, int year);

    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Enter a month from 0 to 12: ");
    scanf("%d", &month);

    printf("\nmonth %d of %d has %d days\n", month, year, numberofDays(month, year));

    return 0;
}


