

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


#include <iostream>
#include <vector>
using namespace std;

bool isCyclicallySorted(const vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) { // Compare with the next element in a cyclic manner
            count++;
        }
    }

    return count <= 1; // If count is less than or equal to 1, the array is cyclically sorted
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 1, 2, 3}; 

    bool sorted = isCyclicallySorted(nums);
    cout << "Is the array cyclically sorted? " << (sorted ? "Yes" : "No") << endl;

    return 0;
}
