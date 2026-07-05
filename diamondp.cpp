// TO make pattern of hollow diamond.
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i < 2)
        {
            for (int j = n - 2 * i - 1; j > 0; j--)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}