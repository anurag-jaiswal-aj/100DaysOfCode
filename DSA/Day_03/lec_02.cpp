#include <iostream>
using namespace std;

// int main()
// {
//     cout << "Hello world!" << endl;

//     int a = 123;
//     cout << a << endl;


//     char c = 'v' ; 
//     cout << c << endl;


//     bool bl = false ;
//     cout << bl << endl;

// }



int main(){
    int n;
    cin >> n;


    int i = 2;

    while (i<n){
        if (n%i ==0)
        {
            cout<< "Not Prime for "<< i <<endl;
        }
        else{
            cout<< "Prime for "<< i <<endl;
        }
        i = i+1;
    }
    
}



