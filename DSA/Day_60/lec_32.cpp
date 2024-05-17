

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

#include <iostream>
using namespace std;

int fibonacci(int n)
{

    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // recursion call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "Fibonacci series is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}