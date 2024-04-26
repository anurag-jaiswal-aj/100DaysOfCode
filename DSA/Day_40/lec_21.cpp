

// --------------------------Rotate Arrays------------------------------------------------------------


#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5}; 
    int k = 2;                          // Rotation amount

    vector<int> temp(nums.size()); // temporary vector to hold rotated elements

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i]; // Rotate elements
    }

    nums = temp; // Update nums with rotated elements

    
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
