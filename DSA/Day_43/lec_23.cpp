

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



// #include <iostream>
// using namespace std;

// void largestRowSum(int arr[][3], int row, int col) {
//     int maxi = INT8_MIN; 
//     int rowIndex = -1;

//     for (int i = 0; i < row; i++) {
//         int sum = 0;
//         for (int j = 0; j < col; j++) {
//             sum += arr[i][j];
//         }
//         if (sum > maxi) {
//             maxi = sum;
//             rowIndex = i;
//         }
//     }

//     if (rowIndex != -1) {
//         cout << "Row with the largest sum is: " << rowIndex + 1 << endl;
//         cout << "Sum of this row: " << maxi << endl;
//     } else {
//         cout << "Array is empty!" << endl;
//     }
// }

// int main() {
//     int arr[3][3]; 

//     cout << "Enter elements for the 2D array:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     largestRowSum(arr, 3, 3);

//     return 0;
// }





// ------------------------Wave Print Problem------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // Define the dimensions of the array
//     const int mCols = 4; // Number of columns
//     const int nRows = 3; // Number of rows

//     // Define the 2D array
//     int arr[nRows][mCols] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     // Vector to store the wave-printed elements
//     vector<int> ans;

//     // Wave print logic
//     for (int col = 0; col < mCols; col++) {
//         if (col & 1) {
//             for (int row = nRows - 1; row >= 0; row--) {
//                 cout << arr[row][col] << " ";
//                 ans.push_back(arr[row][col]);
//             }
//         } else {
//             for (int row = 0; row < nRows; row++) {
//                 cout << arr[row][col] << " ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }

//     return 0;
// }





// -------------------Spiral Point Problem---------------------------------------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     vector<int> ans;

//     int row = matrix.size();
//     int col = matrix[0].size();

//     int count = 0;
//     int total = row * col;

//     // Index initialization
//     int startingRow = 0;
//     int endingRow = row - 1;
//     int startingCol = 0;
//     int endingCol = col - 1;

//     while (count < total) {
//         // Printing starting row
//         for (int index = startingCol; index <= endingCol && count < total; index++) {
//             ans.push_back(matrix[startingRow][index]);
//             count++;
//         }
//         startingRow++;

//         // Printing ending column
//         for (int index = startingRow; index <= endingRow && count < total; index++) {
//             ans.push_back(matrix[index][endingCol]);
//             count++;
//         }
//         endingCol--;

//         // Printing ending row (reverse)
//         for (int index = endingCol; index >= startingCol && count < total; index--) {
//             ans.push_back(matrix[endingRow][index]);
//             count++;
//         }
//         endingRow--;

//         // Printing starting column (reverse)
//         for (int index = endingRow; index >= startingRow && count < total; index--) {
//             ans.push_back(matrix[index][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }

//     // Printing the spiral order
//     cout << "Spiral order:" << endl;
//     for (int num : ans) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }





// -----------------------Rotate matrix by 90 degree(rotate image)--------------------------

// #include <iostream>
// #include <vector>

// using namespace std;

// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();
    
//     // Iterate through each layer
//     for (int layer = 0; layer < n / 2; ++layer) {
//         int first = layer;
//         int last = n - 1 - layer;
        
//         // Perform cyclic swap for each group of four elements
//         for (int i = first; i < last; ++i) {
//             int offset = i - first;
//             int top = matrix[first][i];
            
//             // Move values from right to top
//             matrix[first][i] = matrix[last - offset][first];
            
//             // Move values from bottom to right
//             matrix[last - offset][first] = matrix[last][last - offset];
            
//             // Move values from left to bottom
//             matrix[last][last - offset] = matrix[i][last];
            
//             // Move values from top to left
//             matrix[i][last] = top;
//         }
//     }
// }

// void printMatrix(const vector<vector<int>>& matrix) {
//     for (const auto& row : matrix) {
//         for (int num : row) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
//     cout << "Original Matrix:" << endl;
//     printMatrix(matrix1);
    
//     rotate(matrix1);
    
//     cout << "Rotated Matrix:" << endl;
//     printMatrix(matrix1);
    
//     return 0;
// }








// ------------------------------Binary Search in 2D array(sorted)--------------------------------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch2D(const vector<vector<int>>& matrix, int target) {
//     int row = matrix.size();
//     int col = matrix[0].size();
//     int start = 0;
//     int end = row * col - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         int element = matrix[mid / col][mid % col];

//         if (element == target) {
//             return 1; // Element found
//         } else if (element < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return 0; // Element not found
// }

// int main() {
//     // Example 2D array
//     vector<vector<int>> matrix = {
//         {1, 3, 5},
//         {7, 9, 11},
//         {13, 15, 17}
//     };

//     // Take target element as input from user
//     int target;
//     cout << "Enter the target element: ";
//     cin >> target;

//     // Perform binary search
//     int result = binarySearch2D(matrix, target);

//     // Output the result
//     if (result == 1) {
//         cout << "Element found!" << endl;
//     } else {
//         cout << "Element not found!" << endl;
//     }

//     return 0;
// }






// -----------Search a 2D Matrix II   ---------------------------------------------------------------------

// condition:   
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.


#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0) {
        if (matrix[rowIndex][colIndex] == target) {
            return true; // Found the target
        } else if (matrix[rowIndex][colIndex] < target) {
            // Move to the next row if the current element is smaller than the target
            rowIndex++;
        } else {
            // Move to the previous column if the current element is larger than the target
            colIndex--;
        }
    }

    return false; // Target not found
}

int main() {
    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    // Target value to search
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    // Perform the search
    bool found = searchMatrix(matrix, target);

    // Output the result
    if (found) {
        cout << "Target value found in the matrix." << endl;
    } else {
        cout << "Target value not found in the matrix." << endl;
    }

    return 0;
}
