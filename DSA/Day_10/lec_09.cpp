
// --------------------------------Array----------------------------------------------------


// #include<iostream>
// using namespace std;


// void printArray(int arr[], int size) {

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
// }

// int main() {

//     //declare
//     int number[15];

//     //accessing an array
//     cout << "Value at 14 index " << number[14] << endl;

//     //cout << "Value at 20 index " << number[20] << endl;

//     //initialising an array 
//     int second[3] = {5, 7, 11};

//     //accesing an element
//     cout << "Value at 2 index " << second[2] << endl;

//     int third[15] = {2,7};

//     int n = 15;
//     //printArray(third, 15);
//     int thirdSize = sizeof(third)/sizeof(int);
//     cout<<" Size of Third is " << thirdSize <<endl;

//     //initialising all locations with 0
//     int fourth[10] = {0};

//     n = 10;
//     //printArray(fourth, 10);

//     //initialising all locations with 1 [not possible with below line]
//     int fifth[10] = {1};

//     n = 10;
//     //printArray(fifth, 10);

//     int fifthSize = sizeof(fifth)/sizeof(int);
//     cout<<" Size of Fifth is " << fifthSize <<endl;
    

//     char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
//     cout << ch[3] << endl;

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<5; i++) {
//         cout << ch[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
//     double firstDouble[5];
//     float firstFloat[6];
//     bool firstBool[9];


//     cout << endl << " Everything is Fine " << endl << endl;

//     return 0;
// }





// ----------------------------------------maxMin----------------------------------------------------------------

// #include<iostream>
// using namespace std;

// int getMin(int num[], int n) {

//     int mini = INT_MAX;
    
//     for(int i = 0; i<n; i++) {
        
//         mini = min( mini, num[i]);
        
//         //if(num[i] < min){
//         //    min = num[i];
//         //}
//     }

//     //returning min value
//     return mini;
// }

// int getMax(int num[], int n) {

//     int maxi = INT_MIN;
    
//     for(int i = 0; i<n; i++) {

//         maxi = max(maxi, num[i]);

//        // if(num[i] > max){
//          //   max = num[i];
//        // }
//     }

//     //returning max value
//     return maxi;
// }

// int main() {

//     int size;
//     cin >> size;

//     int num[100];

//     //taking input in array
//     for(int i = 0; i<size; i++) {
//         cin >> num[i];
//     }

//     cout << " Maximum value is " << getMax(num, size) << endl;
//     cout << " Minimum value is " << getMin(num, size) << endl;


//     return 0;
// }





// --------------------------------------arrayScope---------------------------------------------------



// #include<iostream>
// using namespace std;

// void update(int arr[], int n) {

//     cout << endl << "Inside the function" <<endl;
    
//     //updating array's first element
//     arr[0] = 120;

//     //printing the array
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     } cout<<endl;


//     cout << "Going back to main function" << endl;
// }


// int main() {

//     int arr[3] = {1,2,3};

//     update(arr, 3);

//     //printing the array
//     cout<< endl << "Printing in main function" << endl;
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;

//     return 0;
// }








// --------------------------------------linearSearch-----------------------------------------------------------

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key) {

//     for( int i = 0; i<size; i++ ) {

//         if( arr[i] == key) {
//             return 1;
//         }

//     }
//     return 0;
// }


// int main() {

//     int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

//     cout <<" Enter the element to search for " << endl; 
//     int key;
//     cin >> key;

//     bool found = search(arr, 10, key);

//     if( found ) {
//         cout <<" Key is present "<< endl;
//     }
//     else{
//         cout <<" Key is absent " << endl;
//     }


//     return 0;
// }






// --------------------------------------------reverse-----------------------------------------------

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int n) {

//     int start = 0;
//     int end = n-1;

//     while(start<=end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n) {
    
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int arr[6] = {1,4,0,5,-2,15};
//     int brr[5] = {2,6,3,9,4};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);


//     return 0;
// }