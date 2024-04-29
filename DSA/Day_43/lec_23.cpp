

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



// #include <iostream>
// using namespace std;


// bool isPresent(int arr[][4], int target, int row, int col)
// {
//     for (int i = 0; i < row; ++i)
//     {
//         for (int j = 0; j < col; ++j)
//         {
//             if (arr[i][j] == target)
//             {
//                 return true; // Element found
//             }
//         }
//     }
//     return false; // Element not found
// }


// int main()
// {
//     int arr[3][4];
//     cout << "Enter elements for the 2D array:" << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     cout << "Entered 2D array:" << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Enter the element to search: ";
//     int target;
//     cin >> target;

//     if (isPresent(arr, target, 3, 4))
//     {
//         cout << "Element found" << endl;
//     }
//     else
//     {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }





// ------------------------Row wise sum problem----------------------

// #include<iostream>
// using namespace std;

// void printSum(int arr[][3], int row, int col) {
//     cout << "Printing sum ->" << endl;
//     for (int i = 0; i < row; i++) {
//         int sum = 0;
//         for (int j = 0; j < col; j++) {
//             sum += arr[i][j]; // Accumulate the sum for each element in the row
//         }
//         cout << "Sum of row " << i + 1 << ": " << sum << endl;
//     }
// }

// int main() {
//     int arr[3][3]; // Adjusted to 3x3

//     cout << "Enter elements for the 2D array:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) { // Adjusted to 3
//             cin >> arr[i][j];
//         }
//     }

//     printSum(arr, 3, 3);

//     return 0;
// }





//---------------------------Largest row sum problem----------------------------



#include <iostream>
using namespace std;

void largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT8_MIN; 
    int rowIndex = -1;

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }

    if (rowIndex != -1) {
        cout << "Row with the largest sum is: " << rowIndex + 1 << endl;
        cout << "Sum of this row: " << maxi << endl;
    } else {
        cout << "Array is empty!" << endl;
    }
}

int main() {
    int arr[3][3]; 

    cout << "Enter elements for the 2D array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    largestRowSum(arr, 3, 3);

    return 0;
}




// ------------------------Wave Print Problem------------------------------------------


#include <iostream>;
using namespace std;

int main(){



    return 0;
}