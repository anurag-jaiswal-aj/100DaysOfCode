
// --------------------------Bubble Sort----------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the array elements: ";
    int arr[n];

    // Taking array elements input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sorting algorithm
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;  ///for optimisation of code
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    // Printing the output
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}