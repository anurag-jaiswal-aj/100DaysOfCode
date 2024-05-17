
// --------factorial----------

// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0)
//         return 1;

//         // int smallerProblem = factorial(n-1);
//         // int biggerProblem  = n * smallerProblem;
//         // return biggerProblem;

//     return n * factorial(n-1);
// }
// int main(){
//     int n ;
//     cout<<"Enter the value of n:"<<endl;
//     cin>> n;

//     int ans = factorial(n);

//     cout<<ans<<endl;

//     return 0;
// }

// -------------power of 2---------------

// #include <iostream>
// using namespace std;

// int power(int n){

// //base case
// if(n==0){
//     return 1;
// }

// //recursion relation
// // int smallerProblem = power(n-1);
// // int biggerProblem = 2*smallerProblem;
// // return biggerProblem;

// return 2 * power(n-1);

// }

// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;

//     int ans = power(n);
//     cout<<ans<<endl;

//     return 0;
// }

// -------------print counting--------------

#include <iostream>
using namespace std;

int counting(int n)
{
    if (n == 0)
    {
        return 0;
    }

    // tail recursion
    //  cout<< n <<endl;

    counting(n - 1);

    // head recursion
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    counting(n);

    return 0;
}