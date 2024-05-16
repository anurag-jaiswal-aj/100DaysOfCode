
// -----------macros---------------

// #include <iostream>
// using namespace std;
// #define PI 3.14

// int main(){
//     int r=5;
//     // double pi = 3.14;
//     double area = PI*r*r;
//     cout<<"Area is:"<<area<<endl;
//     return 0;
// }


//----------------------global variable------

// #include <iostream>
// using namespace std;


// void a(int& i){
//     cout<<i<<endl;
//     b(i);
// }

// void b(int& i){
//     cout<<i<<endl;
// }

// int main(){
//     int i = 5;
//     a(i);


//     return 0;
// }



// --------inline function-----------------

#include <iostream>
using namespace std;


void func(int a,int b){
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int a =1,b = 2;
    func(a,b);

    return 0;
}