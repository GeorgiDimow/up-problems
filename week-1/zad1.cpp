#include <iostream>

using namespace std;

int main()
{
    char e = ' ', c = '*', n = '\n';
    int count = 5;
    for (int i = 1; i <= count; i++)
    {

        for (int j = 1; j <= (count - i); j++)
        {
            cout << e;
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
