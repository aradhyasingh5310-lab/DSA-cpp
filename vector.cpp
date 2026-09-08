#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    // insert consecutive values.
    v.push_back(45);
    v.push_back(40);
    v.push_back(85);
    // to delete the last element.
    v.pop_back();
    // insert value at 1 index.
    v.insert(v.begin() + 1, 50);
    // delete value of particular index.
    v.erase(v.begin() + 1);
    // display the elements of the vector.
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << "Elemets of the vector are: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> arr;
    arr = v;
    cout << arr.size() << endl;
    // STL FUNCTIONS ->for sorting
    sort(arr.rbegin(), arr.rend());
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << find(arr.begin(), arr.end(), 40) - arr.begin() << endl;
    // count
    int num = count(arr.begin(), arr.end(), 40);
    // max or min
    int maximum = *max_element(arr.begin(), arr.end());
    return 0;
}