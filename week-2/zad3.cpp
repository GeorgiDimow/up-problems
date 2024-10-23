#include <iostream>

using namespace std;

int main()
{
    int coordinate1;
    int coordinate2;
    cout << "Enter coordinates: ";
    cin >> coordinate1 >> coordinate2;

    if (coordinate1 == 0 && coordinate2 == 0)
    {
        cout << "Center" << endl;
    }
    else if (coordinate1 == 0)
    {
        cout << "Ordinate" << endl;
    }
    else if (coordinate2 == 0)
    {
        cout << "Abscissa" << endl;
    }
    else if (coordinate1 > 0 && coordinate2 > 0)
    {
        cout << "1 Quadrant" << endl;
    }
    else if (coordinate1 < 0 && coordinate2 > 0)
    {
        cout << "2 Quadrant" << endl;
    }
    else if (coordinate1 < 0 && coordinate2 < 0)
    {
        cout << "3 Quadrant" << endl;
    }
    else if (coordinate1 > 0 && coordinate2 < 0)
    {
        cout << "4 Quadrant" << endl;
    }

    return 0;
}