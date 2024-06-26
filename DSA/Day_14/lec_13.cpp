
// ---------------------Problem 1(first occurence | last occurence and number of occurence)--------------------------------------------




#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 5, 6};

    cout << "First Occurence of 3 is at index:" << firstOcc(even, 10, 3) << endl;
    cout << "First Occurence of 3 is at index:" << lastOcc(even, 10, 3) << endl;
    cout << "Total number of Occurence of 3 is:" << (lastOcc(even, 10, 3) - firstOcc(even, 10, 3)) + 1;  //for number of occurence
    return 0;
}







// -------------------------------------------Program 02 (Peak in mountain array)||(Leetcode solution)---------------------------------------------------------------------


// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size() - 1;
         
//         int mid = s + (e-s)/2;

//         while(s<e){
//             if(arr[mid] < arr[mid+1]){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid;
//             }
//             mid = s + (e-s)/2;
//         }
//         return s;
//     }
// };

