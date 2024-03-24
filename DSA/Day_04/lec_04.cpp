// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>> n;

//     int i= 1;

//     while (i<=n){
        
//         int j = 1;
//         while(j<=n){
//             cout<< j;
//             j = j +1;
//         }

//         cout<<endl;
//         i = i+1;
//     }
    
// }



// ----------------------------------------------------------



#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>> n;

    int i= n;

    while (i>=1){
        
        int j = n;
        while(j>=1){
            cout<< j;
            j = j - 1;
        }

        cout<<endl;
        i = i - 1;
    }
    
}
