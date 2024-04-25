
// -----------------------------------reverse an array----------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverse(vector<int> arr)
// {

//     int s = 0, e = arr.size() - 1;

//     while (s <= e)
//     {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
//     return arr;
// }

// void print(vector<int> arr)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     vector<int> arr;

//     arr.push_back(11);
//     arr.push_back(7);
//     arr.push_back(3);
//     arr.push_back(12);
//     arr.push_back(4);

//     vector<int> ans = reverse(arr);

//     cout << "Printing  array:" << endl;
//     print(arr);

//     cout << "Printing reverse array:" << endl;
//     print(ans);

//     return 0;
// }





// -------------------------Merge two Sorted Array-----------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr[])
// {

//     int i = 0, j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     while (i < n)
//     {
//         arr[k++] = arr1[i++];
        
//     }

//     while (j < m)
//     {
//         arr[k++] = arr2[j++];
        
//     }
// }


// void print(int arr[], int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[4] = {2, 4, 6, 8};

//     int arr[9] = {};

//     merge(arr1, 5, arr2, 4, arr);

//     print(arr, 9);

//     return 0;
// }




// -------------------------------move zeroes---------------

#include <iostream>
using namespace std;

int main(){

    
    return 0;
}