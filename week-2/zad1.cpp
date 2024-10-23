#include <iostream>

using namespace std;

int main()
{
    double n;
    cout << "Enter money spent for the day: ";
    cin >> n;
    if (n < 0 || n > 15)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    if (n < 3)
    {
        cout << "Hungry" << endl;
    }
    else if (n < 5)
    {
        cout << "University cafetiria" << endl;
    }
    else if (n < 10)
    {
        cout << "Douner" << endl;
    }
    else if (n <= 15)
    {
        cout << "Pizza" << endl;
    }

    return 0;
}