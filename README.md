# insertion_sorting
It is the c++ code for insertion sorting form data structure and algorithm.
So the basically this program is for the algorithm which used for sorting the array in assending order. here in user input you will input the size of array and all the elements of array. It will sort the array in assending order and then give the output of sorted array in assending order. complexity of this in worst case is big O n^2 and n best case big O n. And code is given below:

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
