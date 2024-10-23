#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    int count = 0;
    for (int i = 0; i <= year; ++i)
    {
        if (i % 4 == 0 && i % 100 != 0)
        {
            ++count;
        }
    }

    int numberOfLeapYears = year / 4 - year / 100;

    cout << count << endl;

    cout << numberOfLeapYears;

    return 0;
}