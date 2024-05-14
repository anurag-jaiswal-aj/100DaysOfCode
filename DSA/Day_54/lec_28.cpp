#include <iostream>
using namespace std;


int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

int* func1(int n){
    int* ptr =&n;
    return ptr;
}

void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}


int main(){

    /*
    int i =5;
    int& j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */

   int n = 5;
   cout<<"Before:"<<n<<endl;
   update2(n);  //pass by reference (new memory will not be created)
   cout<<"After:"<<n<<endl;

   func(n);
   func1(n);


    return 0;
}