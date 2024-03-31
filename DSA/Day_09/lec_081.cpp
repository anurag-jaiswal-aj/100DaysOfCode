
// --------------------------power of a number-------------------

// #include <iostream>
// using namespace std;

// int power()
// {
//     int a, b;
//     cin>>a>>b;

//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     return ans;
// }

// int main()
// {

//     int answer = power();

//     cout << "Answer is : " << answer << endl;
// }

// ------------------------Even or odd--------------------------------------------

// #include <iostream>
// using namespace std;

// bool isEven(int a)
// {
//     if (a & 1)
//     {
//         return 0;
//     }

//     return 1;
// }

// int main()
// {
//     int num;
//     cout << "Enter the Number:" << endl;
//     cin >> num;
//     if (isEven(num))
//     {
//         cout << "Number is Even!!" << endl;
//     }
//     else
//     {
//         cout << "Number is odd!!" << endl;
//     }

//     return 0;
// }

// ------------------------nCr--------------------------------------------

// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * 1;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int num = fact(n);
//     int den = fact(r)*fact(n-r);

//     int ans = num / den;
//     return(ans);
// }

// int main()
// {
//     int n,r;
//     cout<<"Enter the value of n and r:"<<endl;;
//     cin>>n >> r;
//     cout<<"Answer is:"<<nCr(n,r);

//     return 0;
// }

// -----------------------counting using function-----------------------------

// #include <iostream>
// using namespace std;

// //Function signature
// void printCounting(int n)   //wen function is not returning any output we use void keyword
// {

//     //Function Body
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     //Function Call
//     printCounting(n);

//     return 0;
// }

// --------------------------Prime number------------------

// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number:";
//     cin >> n;
//     if (isPrime(n))
//     {
//         cout << "Is a prime";
//     }
//     else
//     {
//         cout << "Not a prime number";
//     }
//     return 0;
// }

// ----------------------------------Arithmetic Progression(AP)-------------------------------------------------------

// #include <iostream>
// using namespace std;

// int AP(int n)
// {
//     int ap = 3 * n + 7;
//     return ap;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = AP(n);
//     cout << "Answer is=" << ans << endl;

//     return 0;
// }

// -------------------------------------set bits in a & b--------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int setBitsB(int b)
// {
//     int count = 0;
//     while (b != 0)
//     {
//         if (b & 1)
//         {
//             count++;
//         }
//         b = b >> 1;
//     }
//     return count;
// }

// int setBitsA(int a)
// {
//     int count = 0;
//     while (a != 0)
//     {
//         if (a & 1)
//         {
//             count++;
//         }
//         a = a >> 1;
//     }
//     return count;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int ans1 = setBitsA(a);
//     int ans2 = setBitsB(b);
//     cout << "Set bits of A=" << ans1 << endl;
//     cout << "Set bits of B=" << ans2 << endl;
//     int ans = ans1 + ans2;

//     cout << "Total set bits of A and B are =" << ans << endl;

//     return 0;
// }





// --------------------------------------------nth Febonacci digit--------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     int a = 0;
//     int b = 1;
//     for (int i = 2; i < n; i++)
//     {
//         int next = a + b;
//         a = b;
//         b = next;
//     }
//     return b;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << "The " << n << "th term of the series is = " << fibonacci(n) << endl;

//     return 0;
// }