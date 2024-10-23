#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int days1, month1, year1, hours1, min1, sec1;
    int days2, month2, year2, hours2, min2, sec2;
    char temp;

    cin >> days1 >> temp >> month1 >> temp >> year1 >> hours1 >> temp >> min1 >> temp >> sec1;
    cin >> days2 >> temp >> month2 >> temp >> year2 >> hours2 >> temp >> min2 >> temp >> sec2;

    if (days1 < 1 || days2 < 1 ||
        month1 < 1 || month2 < 1 ||
        year1 < 0 || year2 < 0 ||
        hours1 < 0 || hours2 < 0 ||
        min1 < 0 || min2 < 0 ||
        sec1 < 0 || sec2 < 0)
    {
        cout << "Invalid date/time";
        return 1;
    }
    else if (
        month1 > 12 || month2 > 12 ||
        year1 > 9999 || year2 > 9999 ||
        hours1 > 23 || hours2 > 23 ||
        min1 > 59 || min2 > 59 ||
        sec1 > 59 || sec2 > 59)
    {
        cout << "Invalid date/time";
        return 1;
    }
    int daysInFabruary1 = year1 % 4 == 0 && year1 % 100 != 0 ? 29 : 28;
    int daysInCurrYear1 = days1;
    switch (month1)
    {
    case 1:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 0;
        break;
    case 2:
        if (days1 > (year1 % 4 == 0 && year1 % 100 != 0 ? 29 : 28))
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31;
        break;
    case 3:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1;
        break;
    case 4:
        if (days1 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31;
        break;
    case 5:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30;
        break;
    case 6:
        if (days1 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31;
        break;
    case 7:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31 + 30;
        break;
    case 8:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31 + 30 + 31;
        break;
    case 9:
        if (days1 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31 + 30 + 31 + 31;
        break;
    case 10:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break;
    case 11:
        if (days1 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
    case 12:
        if (days1 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear1 += 31 + daysInFabruary1 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    }

    int daysInFabruary2 = year1 % 4 == 0 && year1 % 100 != 0 ? 29 : 28;
    int daysInCurrYear2 = days2;
    switch (month2)
    {
    case 1:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 0;
        break;
    case 2:
        if (days2 > (year1 % 4 == 0 && year1 % 100 != 0 ? 29 : 28))
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31;
        break;
    case 3:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2;
        break;
    case 4:
        if (days2 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31;
        break;
    case 5:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30;
        break;
    case 6:
        if (days2 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31;
        break;
    case 7:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31 + 30;
        break;
    case 8:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31 + 30 + 31;
        break;
    case 9:
        if (days2 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31 + 30 + 31 + 31;
        break;
    case 10:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break;
    case 11:
        if (days2 > 30)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
    case 12:
        if (days2 > 31)
        {
            cout << "Invalid date/time";
            return 1;
        }
        daysInCurrYear2 += 31 + daysInFabruary2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    }

    int numberOfLeapYearsBefore1 = (year1 - 1) / 4 - (year1 - 1) / 100;
    int numberOfLeapYearsBefore2 = (year2 - 1) / 4 - (year2 - 1) / 100;

    long totalDays1 = (year1 * 365) + numberOfLeapYearsBefore1 + daysInCurrYear1;
    // numberOfLeapYear represents the number of extra days that needs to be added

    long long totalHours1 = totalDays1 * 24 + hours1;
    long long totalMin1 = totalHours1 * 60 + min1;
    long long totalSec1 = totalMin1 * 60 + sec1;

    long totalDays2 = (year2 * 365) + numberOfLeapYearsBefore2 + daysInCurrYear2;
    long long totalHours2 = totalDays2 * 24 + hours2;
    long long totalMin2 = totalHours2 * 60 + min2;
    long long totalSec2 = totalMin2 * 60 + sec2;

    long long differenceInSec = abs(totalSec2 - totalSec1);
    long long displayDays = differenceInSec / 60 / 60 / 24;
    // the first devision is used to convert seconds to minutes
    // the second devision is used to convert minutes to hours
    // and the thidth is used to convert hours to days
    long displayHours = differenceInSec / 60 / 60 % 24;
    // the first devision is used to convert seconds to minutes
    // the second devision is to used convert minutes to hours
    // and % is used to calculate the remaining hours
    int displayMins = differenceInSec / 60 % 60;
    // the first devision is used to convert seconds to minutes
    // and % is used to calculate the remaining minutes
    int displaySeconds = differenceInSec % 60;
    // % is used to calculate the remaining seconds

    if (displayDays == 0)
    {
        displayHours < 10 ? cout << "0" << displayHours : cout << displayHours;
        cout << ":";
        displayMins < 10 ? cout << "0" << displayMins : cout << displayMins;
        cout << ":";
        displaySeconds < 10 ? cout << "0" << displaySeconds : cout << displaySeconds;
    }
    else
    {
        cout << displayDays << "-";
        displayHours < 10 ? cout << "0" << displayHours : cout << displayHours;
        cout << ":";
        displayMins < 10 ? cout << "0" << displayMins : cout << displayMins;
        cout << ":";
        displaySeconds < 10 ? cout << "0" << displaySeconds : cout << displaySeconds;
    }

    return 0;
}