//This is the introduction of arrays. Here user is giving the input.
#include <iostream>
using namespace std;
int main()
{
  //Student's marks are being recorded by user with the help of following code.
  int marks[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> marks[i];
  }
  for (int i = 0; i < 5; i++)
  {
    cout << marks[i] << "\t";
  }
  return 0;
}