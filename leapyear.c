// To caclulate the year is a leap year or not

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d The year is leap year",year);
            }
            else
            {
                printf("%d Not leap year",year);
            }
        }
        else
        {
            printf("%d Not leap year",year);
        }
    }
    else
    {
        printf("%d Not leap year",year);
    }

    return 0;
}
