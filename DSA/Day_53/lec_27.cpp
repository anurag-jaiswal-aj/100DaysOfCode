
/*
#include <iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 +1;
    //kuch change hoga kya -----no

    // *p2 = *p2 + 1;
    //kuch change hoga kya -----yes


    **p2 = **p2 + 1;
    //kuch change hoga kya -----yes

}


int main(){

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    // cout<<endl<<"OK"<<endl;

    // cout<<"Printing p: "<<p<<endl;
    // cout<<"Printing address of p: "<<&p<<endl;

    // cout<<"*p2: "<<*p2<<endl;


    // cout<< i <<endl;
    // cout<< *p <<endl;
    // cout<< **p2 <<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl;


cout<<endl;
cout<<"Before"<<i <<endl;
cout<<"Before"<<p <<endl;
cout<<"Before"<<p2 <<endl;
update(p2);
cout<<"After"<<i<<endl;
cout<<"After"<<p<<endl;
cout<<"After"<<p2<<endl;



    return 0;
}

*/



// ---------------practice problems----------------

#include <iostream>
using namespace std;

int main(){

// // -----1-------
// int first = 8;
// int second = 18;
// int *ptr = &second;
// *ptr = 9;
// cout<<first << " "<<second<<endl;
// // O/P: 8 9


// // -------2----------
// int first = 6;
// int *p = &first;
// int *q = p;
// (*q)++;
// cout<<first<<endl;
// // o/p: 7


// // -----------3--------
// int first = 8;
// int *p = &first;
// cout<<(*p)++ << " ";
// cout<<first<<endl;
// o/p: 8 9


//----------4-------------
int *p = 0;
int first = 110;
*p = first;
// p = &first;
cout<<*p<<endl;
// o/p:error


    return 0;
}