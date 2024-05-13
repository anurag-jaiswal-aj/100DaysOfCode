#include <iostream>
using namespace std;

int main(){

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<<endl<<"OK"<<endl;

    cout<<"Printing p: "<<p<<endl;
    cout<<"Printing address of p: "<<&p<<endl;

    cout<<"*p2: "<<*p2<<endl;


    cout<< i <<endl;
    cout<< *p <<endl;
    cout<< **p2 <<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;




    return 0;
}