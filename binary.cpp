#include <iostream>
using namespace std;
// To convert the decimal number into binary numbers
int binary(int decNum)
{
    int pow = 1;
    int ans = 0;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    cout << binary(6) << endl;
    return 0;
}