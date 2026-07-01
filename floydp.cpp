// floyd's triangle pattern.
#include <iostream>
using namespace std;
int main()
{

    int n = 4;
   int num = 1;
   cout<< "In Numbers"<<endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

// now in character format
 int a = 4;
   char word = 'A';
     cout<< "In Characters"<<endl;
    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << word << " ";
            word++;
        }
        cout << endl;
    }
}