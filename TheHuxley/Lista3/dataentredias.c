#include <stdio.h>
#include <math.h>

/*Calculate how many days are different between two dates*/
struct date
{
    int years;
    int months;
    int days;
};

int isItALeapYear(int year)
{

    if (year % 400 == 0)
    {
        return 1;
    }
    else if (year % 100 == 0)
    {
        return 0;
    }
    else if (year % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int days_on_month[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}}; //Respectively correspond to the number of days from January to December, a[0] is empty

int days_date(struct date s) //Based on 0000-00-00, calculate how many days have passed
{
    int sum = 0;                      //Statistics days
    for (int i = 1; i < s.years; i++) //years
    {
        if (isItALeapYear(s.years)) //Determine if it is a leap year
            sum += 366;
        else
            sum += 365;
    }

    for (int k = 1; k < s.months; k++) //month
        sum += days_on_month[0][k];

    return sum + s.days; //Add the number of days
}

int diff(struct date s1, struct date s2)
{
    return days_date(s1) - days_date(s2);
}

struct date midPoint(struct date s1, struct date s2)
{

    struct date myDate = s1;
    int numberOfDays = diff(s1, s2);

    while (numberOfDays > 0)
    {
        myDate.days++;
        numberOfDays--;

        if (myDate.days > days_on_month[myDate.months] && myDate.months != 2)
        {
            myDate.days = 1;
            myDate.months++;
            if (myDate.months > 12)
            {
                myDate.months = 1;
                myDate.years++;
            }
        }
        else if (myDate.months == 2 && myDate.days > days_on_month[myDate.months] && !isItALeapYear(myDate.years))
        {
            myDate.days = 1;
            myDate.months++;
            if (myDate.months > 12)
            {
                myDate.months = 1;
                myDate.years++;
            }
        }
        else if (myDate.months == 2 && myDate.days > (days_on_month[myDate.months] + 1) && isItALeapYear(myDate.years))
        {
            myDate.days = 1;
            myDate.months++;
            if (myDate.months > 12)
            {
                myDate.months = 1;
                myDate.years++;
            }
        }
    }
    return myDate;
}

int main()
{
    struct date s1, s2, dataMediana;
    scanf("%d/%d/%d", &s2.days, &s2.months, &s2.years);
    scanf("%d/%d/%d", &s1.days, &s1.months, &s1.years);

    dataMediana = midPoint(s1, s2);
    printf("%d\n", diff(s1, s2));
    return 0;
}