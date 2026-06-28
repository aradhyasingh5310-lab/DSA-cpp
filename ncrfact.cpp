#include <iostream>
using namespace std;
//To find combinations by using formula n!/(r!*(n-r)!)
int num1(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int num2(int a, int r)
{
    int fact1 = num1(a);
    int fact2 = num1(r);
    int fact3 = num1(a - r);
    return fact1 / (fact2 * fact3);
}

int main()
{
    cout << num2(7, 5);
    return 0;
}
