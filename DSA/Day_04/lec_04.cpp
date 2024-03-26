// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>> n;

//     int row= 1;

//     while (row<=n){

//         int col = 1;
//         while(col<=n){
//             cout<< col;
//             col = col +1;
//         }

//         cout<<endl;
//         row = row+1;
//     }

// }

// ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>> n;

//     int row= n;

//     while (row>=1){

//         int col = n;
//         while(col>=1){
//             cout<< col;
//             col = col - 1;
//         }

//         cout<<endl;
//         row = row - 1;
//     }

// }

// ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int row = 1;
//     int count = 1;

//     while (row <= n)
//     {

//         int col = 1;
//         while (col <= n)
//         {
//             cout<<count<<"  ";
//             count = count + 1;
//             col = col + 1;
//         }

//         cout << endl;
//         row = row + 1;
//     }
// }

// // ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// -----------------------Pattren-----------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int row = 1;
//     while (row<=n)
//     {
//         int col = 1;
//         while (col<=row)
//         {
//             cout<<row<<" ";
//             col = col+1;
//         }
//         cout<<endl;
//         row= row +1;

//     }

// }

// -----------------------Pattren-----------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of lines:";
//     cin >> n;

//     int num = 1;
//     int row = 1;

//     while (row <= n)
//     {

//         int col = 1;
//         while (col <= row)
//         {
//             cout << num << " ";
//             num = num +1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;

//     }

// }

// -----------------------Pattren-----------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n:";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         // int num = i;
//         while (j <= i)
//         {
//             cout << (i + j - 1) << " ";
//             // cout << num << " ";
//             // num = num + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// O/P:
// 1
// 2 3
// 3 4 5
// 4 5 6 7 
// 5 6 7 8 9

// --------------------Pattern-------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<(i-j+1);
//             j = j+1;
//         }

//         cout<<endl;
//         i = i+1;
//     }
// }

// O/P:
// 1
// 21
// 321
// 4321
// 54321


// --------------------Pattern-------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     while(i<=n){

//         int j = 1;
//         while (j<=n)
//         {
//             char ch = 'A'+i-1;
//             cout<< ch;
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+ 1;
//     }

// }
// O/P:
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE




// --------------------Pattern-------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + j - 1;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// O/P:
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE




// --------------------Pattern-------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     char value = 'A';

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << value;
//             value = value + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// O/P:
// BCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY

// --------------------Pattern-------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;


//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// O/P:
// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI

// --------------------------Pattern----------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char ch = 'A'+i-1;
//             cout<<ch;
//             j = j + 1;
//         }
//     cout<<endl;
//     i = i + 1;
//     }
// }


// O/P:
// A
// BB
// CCC
// DDDD
// EEEEE



// --------------------------Pattern----------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     char value = 'A';

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << value;
//             value = value + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// O/P:
// A
// BC
// DEF
// GHIJ
// KLMNO

// --------------------------Pattern----------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int i = 1;

//     while(i<=n){
//         int j = 1;
//         char value = 'A' + n - i;
//         while (j<=i)
//         {
//             cout<<value;
//             value = value + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }


// O/P:
// E
// DE
// CDE
// BCDE
// ABCDE


// -----------------Pattern--------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int space = n - i;
//         while(space){
//             cout<<" ";
//             space = space - 1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<"*";
//             j = j +1 ;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// O/P:
//     *
//    **
//   ***
//  ****
// *****


// -----------------Pattern--------------------


// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int i = 1;

//     while(i<=n){
//         int space = n -i;
//         while(space){
//             cout<<" ";
//             space = space - 1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<j;
//             j = j +1;
//         }

//         int start = i - 1;
//         while(start){
//             cout<<start;
//             start = start - 1;
//         }
//         cout<<endl;
//         i = i +1;
//     }
// }


// O/P:
//     1
//    121
//   12321
//  1234321
// 123454321
