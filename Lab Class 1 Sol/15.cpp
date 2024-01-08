#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
    {
        int nearestLeapYear = year;
        while (!isLeapYear(nearestLeapYear))
        {
            nearestLeapYear++;
        }
        cout << year << " is not a leap year. The nearest leap year is " << nearestLeapYear << endl;
    }

    return 0;
}
