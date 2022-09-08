#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number of elements in array :" << endl;
    int a, i;
    cin >> a; // a is size of array
    int n[a]; // n is array
    n[0] = -1000;
    for (i = 1; i <= a; i++) // this loop is for taking values of arrays
    {
        cout << "enter the " << i << " element: ";
        cin >> n[i];
    }
    for (i = 2; i <= a; i++)
    {
        int x = n[i];
        int j = i - 1;
        while (x < n[j])
        {
            n[j + 1] = n[j];
            j = j - 1;
        }
        n[j + 1] = x;
    }
    for (i = 1; i <= a; i++)
    {
        cout << n[i] << "\t";
    }
}