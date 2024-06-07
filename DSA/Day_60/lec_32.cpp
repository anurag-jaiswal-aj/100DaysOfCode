
// #include <iostream>
// using namespace std;

// void reachHome(int src, int dest)
// {

//     cout << "Source:" << src << "   Destination:" << dest << endl;

//     // base case

//     if (src == dest)
//     {
//         cout << "Reached destination" << endl;
//         return;
//     }

//     // processing - one step aage badhjao
//     src++;

//     // rcursion call
//     reachHome(src, dest);

// }

// int main()
// {

//     int dest = 10;
//     int src = 1;

//     cout << endl;

//     reachHome(src, dest);

//     return 0;
// }






// -----------------------febonaci series------------


// #include <iostream>
// using namespace std;

// int fibonacci(int n)
// {

//     // base case
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     // recursion call
//     return fibonacci(n - 1) + fibonacci(n - 2);

// }


// int main()
// {
//     int n;
//     cout << "Enter the value of n:" << endl;
//     cin >> n;

//     cout << "Fibonacci series is:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }





// ----------------climb stairs-------------

// #include <iostream>
// using namespace std;

// int countStairs(int n)
// {

//     if (n < 0)
//     {
//         return 0;
//     }
//     if (n == 0)
//     {
//         return 1;
//     }

//     return countStairs(n - 1) + countStairs(n - 2);
// }

// int main()
// {

//     int n;
//     cout << "Enter the numbers of stairs:" << endl;
//     cin >> n;

//     cout<<"NO of distinct ways:"<< countStairs(n) <<endl;

//     return 0;
// }





// --------------say digit------------

#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";


}


int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin >> n;

    cout << endl;
    sayDigit(n, arr);
    cout << endl<<endl;


    return 0;
}