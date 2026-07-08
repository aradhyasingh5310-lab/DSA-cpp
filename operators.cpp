#include <iostream>
using namespace std;
// bitwise operators
int main()
{
    int a = 6, b = 10;
    // Bitwise &
    cout << "Bitwise & = " << (a & b) << endl;
    // Bitwise |
    cout << "Bitwise | = " << (a | b) << endl;
    // Bitwise ^
    cout << "Bitwise ^ = " << (a ^ b) << endl;
    //   More bitwise operators are left-shift and right-shift.
    //   Left-shift bitwise operator. FORMULA a*(2^b) if a<<b
    cout << "Bitwise << = " << (10 << 2) << endl;
    // Right-shift bitwise operator. FORMULA a/(2^b) if a>>b
    cout << "Bitwise >> = " << (10 >> 1) << endl;
}