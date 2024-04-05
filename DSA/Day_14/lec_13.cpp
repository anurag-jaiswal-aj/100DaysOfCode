
// ---------------------Problem 1----------------------------]

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
            e = mid + 1;
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
    int even[6] = {1, 2, 3, 3, 5, 6};
    int odd[7] = {1, 2, 3, 6, 2, 2, 2};

    cout << "First Occurence of 3 is at index:" << firstOcc(even, 6, 3);
    cout << "First Occurence of 2 is at index:" << firstOcc(odd, 7, 2);

    return 0;
}
