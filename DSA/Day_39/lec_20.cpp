
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

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[] , int n , int arr2[] , int m , int arr[]){

}

int main(){
    int arr1[5] ={1,3,5,7,9};
    int arr2[4] ={2,4,6,8};

    int arr[0] = {0};

    merge(arr1, 5 , arr2 , 4 , arr);

    print(arr ,0);




    return 0;
}

