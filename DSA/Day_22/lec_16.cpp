

// -----------------------------Selection Sort----------------

#include <iostream>
using namespace std;

int main()
{

    //Declaring array and variables
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];

//Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

//Selection sort
    for (int i = 0; i < (n - 1); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

//Swaping Element
        swap(arr[minIndex], arr[i]);
    }

// Output Sorted Array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}



