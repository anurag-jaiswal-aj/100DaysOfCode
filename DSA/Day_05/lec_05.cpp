// #include <iostream>
// using namespace std;

// int main(){

//     int a = 4;
//     int b = 6;

// // ----------Bitwise operator-------------

//     cout<<"A&B "<<(a&b)<<endl;
//     cout<<"A|B "<<(a|b)<<endl;
//     cout<<"~A "<<(~a)<<endl;
//     cout<<"A^B "<<(a^b)<<endl;

// // ----LEFT AND RIGHT SHIFT-----------

//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;

// // ----------------------Pre and post Increment /Decrement--------------------------

// int i = 5;

// cout<< (++i)<<endl;
// // 6
// cout<< (i++)<<endl;
// //6 , i = 7
// cout<< (i--)<<endl;
// //7 , i = 6
// cout<< (--i)<<endl;
// //5 , i =5
// }

// -----------------Questions output--------------

// 1) 1
// 2) stage 1 -Insider if  a = 0  and b = 3
// 3) stage 1 -Insider if a =0 and b = 3
// 4) 100
// 5) b = 1 and c = 3

//  -----------------For Loop---------------------

#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Printing Count from 1 to n:" << endl;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // --------------------------------------------------

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Printing Count from 1 to n:" << endl;
    // int i = 1;
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i++;
    // }

    // --------sum of n numbers----------------------

    //     int n;
    //     cout << "Enter the value of n:" << endl;
    //     cin >> n;

    //     int sum = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         sum = sum + i;
    //     }
    //     cout << sum << endl;
    // }

    // ------------------------fibonacci series--------------

    // int n;
    // cout << "Enter the value of n:" << endl;
    // cin >> n;

    // int a = 0;
    // int b = 1;
    // cout<<a<<" "<<b<<" ";

    // for (int i = 0; i <= n; i++)
    // {
    //     int c = a + b;
    //     cout << c << " ";

    //     a = b;
    //     b = c;
    // }

    // ----------------------Prime or not---------------

    // int n;
    // cout << "Enter the value of n:" << endl;
    // cin >> n;

    // bool isPrime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if (isPrime == 0)
    // {
    //     cout << "Not a prime number" << endl;
    // }
    // else
    // {
    //     cout << "It is a Prime number" << endl;
    // }

    // -------------------leetcode problem::::Subtract the Product and Sum of Digits of an Integer----------------------------------

    // int n;
    // cin >> n;

    // int prod = 1;
    // int sum = 0;

    // while (n != 0)
    // {

    //     int digit = n % 10;
    //     prod = prod * digit;
    //     sum = sum + digit;

    //     n = n / 10;
    // }
    // int answer = prod - sum;
    // // return answer;

    // cout<<answer;



    // -----------------------Number of 1 bits problem---------



//     unsigned int n;
//     cin >> n;

//     int count = 0;
//     while (n != 0)
//     {
//         if (n & 1)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }
//     cout << count;


 }