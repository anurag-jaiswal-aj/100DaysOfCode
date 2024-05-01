
// ---------------Prime number(Brute force approach---------------------

// #include <iostream>
// using namespace std;

// bool isPrime(int n){

//     if(n<=1){
//         return false;
//     }

//     for(int i = 2;i<n;i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }



// int main(){

//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"It is a prime number:!"<<endl;
//     }
//     else{
//         cout<<"Not a prime number!"<<endl;
//     }
//     return 0;
// }




// -------------------- implementation of the Sieve of Eratosthenes algorithm to count prime numbers-------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int countPrimes(int n) {
//         int cnt = 0;
//         std::vector<bool> prime(n + 1, true);

//         prime[1] = prime[0] = false;

//         for (int i = 2; i < n; i++) {
//             if (prime[i]) {
//                 cnt++;

//                 for (int j = 2 * i; j < n; j += i) { 
//                     prime[j] = 0;
//                 }
//             }
//         }
//         return cnt;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter the value of n:" << endl;
//     cin >> n;

//     Solution sol;
//     int primesCount = sol.countPrimes(n);

//     cout << "Number of prime numbers less than " << n << " is: " << primesCount << endl;

//     bool isPrime = true;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime) {
//         cout << "It is a prime number!" << endl;
//     } else {
//         cout << "Not a prime number!" << endl;
//     }
//     return 0;
// }




// ---------------------------GCD/HCF--------------------------

#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}