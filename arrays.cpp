//pass by reference in array
#include <iostream>
using namespace std;
void changeArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = 3 * arr[i];
  }
}
int main()
{
  int arr[] = {3, 4, 5, 6};
  changeArr(arr, 4);
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}