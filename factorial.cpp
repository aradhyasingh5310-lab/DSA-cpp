#include <iostream>
using namespace std;
// To find the factorial of a given number.
int num(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    cout << num(5) << endl;
    return 0;
}