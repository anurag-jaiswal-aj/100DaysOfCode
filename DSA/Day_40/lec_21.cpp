

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

vector<int> addTwoArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> ans;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0) {
        int val1 = (i >= 0) ? a[i] : 0;
        int val2 = (j >= 0) ? b[j] : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    if (carry != 0) {
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end()); // Reverse the vector to get the correct order
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    vector<int> result = addTwoArrays(a, b);

    // Output the result array
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
