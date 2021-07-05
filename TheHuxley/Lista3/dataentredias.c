#include <stdio.h>
#include <time.h>
int main()
{
    int month;
    int secondsBetweenDates;
    const int secondsInADay = 86400;
    struct tm start_date;
    struct tm end_date;
    time_t start_time, end_time;

    start_date.tm_hour = 0;
    start_date.tm_min = 0;
    start_date.tm_sec = 0;

    end_date.tm_hour = 0;
    end_date.tm_min = 0;
    end_date.tm_sec = 0;

    scanf("%d/%d/%d", &start_date.tm_mday, &month, &start_date.tm_year);
    start_date.tm_mon = (month - 1);
    scanf("%d/%d/%d", &end_date.tm_mday, &month, &end_date.tm_year);
    end_date.tm_mon = (month - 1);

    start_time = mktime(&start_date);
    end_time = mktime(&end_date);

    start_date.tm_sec += difftime(end_time, start_time);
    mktime(&start_date);

    printf("%02d/%02d/%02d %02d:%02d\n", start_date.tm_mday, start_date.tm_mon + 1, start_date.tm_year, start_date.tm_hour, start_date.tm_min);

    return 0;
}