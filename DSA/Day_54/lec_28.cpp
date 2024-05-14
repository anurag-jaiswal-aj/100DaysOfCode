#include <iostream>
using namespace std;


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

    return 0;
}