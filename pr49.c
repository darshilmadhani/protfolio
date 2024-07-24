#include <stdio.h>

void main()
{
    int start_year, end_year, leap_years[20], count = 0;
    printf("Enter start year: ");
    scanf("%d", &start_year);
    printf("Enter end year: ");
    scanf("%d", &end_year);
    for (int year = start_year; year <= end_year; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            leap_years[count] = year;
            count++;
        }
    }
    printf("Leap years between %d and %d are: \n", start_year, end_year);
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", leap_years[i]);
    }
}