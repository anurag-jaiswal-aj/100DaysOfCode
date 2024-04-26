

// --------------------------Rotate Arrays------------------------------------------------------------


// #include <iostream>
// #include <vector> 
// using namespace std;

// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 5}; 
//     int k = 2;                          // Rotation amount

//     vector<int> temp(nums.size()); // temporary vector to hold rotated elements

//     for (int i = 0; i < nums.size(); i++)
//     {
//         temp[(i + k) % nums.size()] = nums[i]; // Rotate elements
//     }

//     nums = temp; // Update nums with rotated elements

    
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }





//--------------check if array is sorted and rotated-----------------------------------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// bool isCyclicallySorted(const vector<int>& nums) {
//     int count = 0;
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         if (nums[i] > nums[(i + 1) % n]) { // Compare with the next element in a cyclic manner
//             count++;
//         }
//     }

//     return count <= 1; // If count is less than or equal to 1, the array is cyclically sorted
// }

// int main() {
//     vector<int> nums = {4, 5, 6, 7, 1, 2, 3}; 

//     bool sorted = isCyclicallySorted(nums);
//     cout << "Is the array cyclically sorted? " << (sorted ? "Yes" : "No") << endl;

//     return 0;
// }






//-----------------------------------------Add two arrays---------------------------------------------------------
#include <iostream>
#include <vector>
#include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;

int main() {
    
    vector<int> a = {9, 2, 3, 7 }; 
    vector<int> b = {4, 5, 6, 5 ,6}; 

    vector<int> ans; 

    int i = a.size() - 1; // Initialize index i to the last index of array 
    int j = b.size() - 1; 

    int carry = 0; 

    // Loop until both indices i and j are non-negative
    while (i >= 0 && j >= 0) {

        int val1 = a[i]; // Get the digit at index i from array a
        int val2 = b[j]; // j from array b

        int sum = val1 + val2 + carry; // Calculate the sum of the digits along with carry

        carry = sum / 10; // Update carry for the next iteration

        sum %= 10; // Get the digit part of the sum

        ans.push_back(sum); //Add the digit to the result array

        i--; // Move to the next digit 
        j--; 
    }

    // Loop through the remaining digits in array a

    while (i >= 0) {
        int sum = a[i] + carry; 
        carry = sum / 10; 
        sum %= 10; 
        ans.push_back(sum); 
        i--;
    }

   
    while (j >= 0) {
        int sum = b[j] + carry; 
        carry = sum / 10; 
        sum %= 10; 
        ans.push_back(sum); 
        j--; 
    }


    // If there's still a carry after processing both arrays
    while (carry != 0) {
        ans.push_back(carry % 10); // Add the remaining carry to the result array
        carry /= 10; // Update carry for the next iteration
    }

   
    for (int k = ans.size() - 1; k >= 0; k--) {
        cout << ans[k] << " ";
    }
    cout << endl;

    return 0;
}
