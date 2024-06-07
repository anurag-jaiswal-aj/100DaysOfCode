

// ------------------------Alternate Swap-------------------------------------------------

// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void swapAlternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if ((i + 1) < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// int main()
// {

//     int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
//     int odd[5] = {11, 33, 9, 76, 43};

//     swapAlternate(even, 8);
//     printArray(even, 8);

//     cout<<endl;

//     swapAlternate(odd,5);
//     printArray(odd,5);

//     return 0;
// }

// ---------------------------find Unique Element------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int findUnique(int*arr , int size)
// {
//     int ans = 0;

//     for (int i = 0; i < size; i++)
//     {
//         ans = ans * arr[i];
//     }
//     return 0;
// }

// ----------------------------------find duplcates--------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int findDuplicate(vector<int> & arr){

//     int ans = 0;

//     for(int i = 0; i<arr.size(); i ++){
//         ans = ans^arr[i];
//     }

//     for(int i = 1; i<arr.size(); i ++){
//         ans = ans^i;
//     }
//     return ans;
// }


// ----------------------------------array intersection--------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int>& arr2) {
//     vector<int> ans;

//     for (int i = 0; i < n; i++) {
//         int element = arr1[i];

//         for (int j = 0; j < n; j++) {
//             if (element == arr2[j]) {
//                 ans.push_back(element);
//                 arr2[j] = -113431;
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// ----------------------------------pair sum--------------------------

// #include <iostream>
// #include <vector>
// #include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
// using namespace std;

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//     vector<vector<int>> ans;

//     for(int i = 0;i<arr.size();i++){
//         for(int j = i +1; j<arr.size();j++){
//             if(arr[i] + arr[j] == s){
//                 vector<int> temp;
//                 temp.push_back(min(arr[i] , arr[j]));
//                 temp.push_back(max(arr[i] , arr[j]));
//                 ans.push_back(temp);

//             }
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;

// }





// ----------------------------------triplet sum--------------------------



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums, int target) {
//     vector<vector<int>> result;
//     int n = nums.size();
//     sort(nums.begin(), nums.end());

//     for (int i = 0; i < n - 2; ++i) {
//         if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

//         int left = i + 1, right = n - 1;
//         while (left < right) {
//             int sum = nums[i] + nums[left] + nums[right];
//             if (sum == target) {
//                 result.push_back({nums[i], nums[left], nums[right]});
//                 ++left; --right;
//                 // Skip duplicates
//                 while (left < right && nums[left] == nums[left - 1]) ++left;
//                 while (left < right && nums[right] == nums[right + 1]) --right;
//             } else if (sum < target) {
//                 ++left;
//             } else {
//                 --right;
//             }
//         }
//     }

//     return result;
// }

// int main() {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     int target = 0;
//     vector<vector<int>> result = threeSum(nums, target);

//     cout << "Triplets summing up to " << target << ":" << endl;
//     for (const auto& triplet : result) {
//         cout << "[";
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << "]" << endl;
//     }

//     return 0;
// }







// ----------------------------------sort 0 1 2--------------------------



// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void sortOne(int arr[], int n)
// {
//     int left = 0, right = n - 1;

//     while (left < right)
//     {

//         while (arr[left] == 0 && left < right)
//         {
//             left++;
//         }

//         while (arr[right] == 1 && left < right)
//         {
//             right--;
//         }

//         if (left < right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
// }

// int main()
// {
//     int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

//     sortOne(arr, 8);
//     printArray(arr, 8);

//     return 0;
// }
