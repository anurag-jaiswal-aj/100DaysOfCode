

// ----------------------creating input and output 2-D array--------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[3][4];

// int arr[3][4] = {1,2,4,5,6,7,8,9,10,11,12}
//  int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}

//     // taking input row wise
//     cout << "Enter elements" << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     // taking iput coloumn wise
//     cout << "Enter elements" << endl;
//     for (int col = 0; col < 4; col++)
//     {
//         for (int row = 0; row < 3; row++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     // printing
//     for (int col = 0; col < 3; col++)
//     {
//         for (int row = 0; row < 4; row++)
//         {
//             cout << arr[row][col] << " ";
//         }

//         cout << endl;
//     }

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[col][row] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }




// ------------------------------------Linear search in 2D array--------------------------------



#include <iostream>
using namespace std;


bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (arr[i][j] == target)
            {
                return true; // Element found
            }
        }
    }
    return false; // Element not found
}


int main()
{
    int arr[3][4];
    cout << "Enter elements for the 2D array:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "Entered 2D array:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search: ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
