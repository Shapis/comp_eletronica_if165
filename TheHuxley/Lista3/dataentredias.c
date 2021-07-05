#include <stdio.h>

struct days_date
{
    int year;
    int month;
    int day;
};

int days_in_month[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int isLeapYear(int year)
{

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// int distanceBetweenDates(struct days_date myStartDate, struct days_date myEndDate)
// {
//     int temp = 0;

//     while (myStartDate.day != myEndDate.day && myStartDate.month != myEndDate.month && myStartDate.year != myEndDate.year)
//     {
//         temp++;
//         myStartDate = moveOneDayUp(myStartDate);
//     }
//     return temp;
// }

struct days_date moveOneDayUp(struct days_date myStartDate)
{

    if (myStartDate.day < days_in_month[isLeapYear(myStartDate.year)][myStartDate.month])
    {
        myStartDate.day++;
    }
    else if (myStartDate.day == days_in_month[isLeapYear(myStartDate.year)][myStartDate.month])
    {
        myStartDate.day = 1;
        myStartDate.month++;
        if (myStartDate.month > 12)
        {
            myStartDate.month = 1;
            myStartDate.year++;
        }
    }
    return myStartDate;
}

int main()
{

    struct days_date _startDate;
    struct days_date _endDate;
    struct days_date _tempDate;
    int temp = 0, restoInteiro;

    scanf("%d/%d/%d", &_startDate.day, &_startDate.month, &_startDate.year);
    scanf("%d/%d/%d", &_endDate.day, &_endDate.month, &_endDate.year);

    _tempDate = _startDate;

    while (_tempDate.day != _endDate.day || _tempDate.month != _endDate.month || _tempDate.year != _endDate.year)
    {
        temp++;
        _tempDate = moveOneDayUp(_tempDate);
    }

    restoInteiro = temp % 2;

    for (size_t i = 0; i < (temp / 2); i++)
    {
        _startDate = moveOneDayUp(_startDate);
    }

    printf("%d/%d/%d\n", _startDate.day, _startDate.month, _startDate.year);

    return 0;
}