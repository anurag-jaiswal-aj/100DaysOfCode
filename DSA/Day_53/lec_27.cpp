
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


// //----------4-------------
// int *p = 0;
// int first = 110;
// *p = first;
// // p = &first;
// cout<<*p<<endl;
// // o/p:error

// //---------5--------------
// int first = 8;
// int second = 11;
// int *third = &second;
// first = *third;
// *third = *third + 2;
// cout<< first << " "<<second<< endl;
// // o/p:11 13



// //-----------6---------
// float f = 12.5;
// float p = 21.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout<< *ptr <<" "<< f <<" "<<p<<endl;
// // O/p:21.5 215 21.5



// //-------7-------
// int arr[5];
// int *ptr;
// cout<<sizeof(arr) <<" "<< sizeof(ptr)<<endl;
// // o/P:20 8 or 4


// //-----8-----
// int arr[] = {11,21,13,14};
// cout<<*(arr)<<" "<<*(arr+1)<<endl;
// O/P:11 21

// //------9------
// int arr[6] = {11,12,31};
// cout<<arr<<" "<< &arr <<endl;
// // O/P: 0x61fef8  0x61fef8



// //----10------
// int arr[] = {11,12,13,14,15};
// cout<<*(arr)<<" "<< *(arr+3);
// // O/P:11 14


// //-----11-------
// int arr[] = {11,21,31,41};
// int *ptr = arr++;
// cout<<*ptr<<endl;
// // o/P: error


// //--------12-----
// char ch = 'a';
// char* ptr =&ch;
// ch++;
// cout<< *ptr <<endl;
// // O/P:b


// //---------13--------
// char arr[] ="abcde";
// char *p = &arr[0];
// cout << p << endl;
// // O/P:abcde


// // -----------14----------]
// char str[] = "babbar";
// char *p = str;
// cout<<str[0]<<" "<<p[0]<<endl;
// // O/P:b b 



// //---------------15--

// void update(int *p){
//     *p = (*p)*2;
// }

// int main(){
//     int i = 10;
//     update(&i);
//     cout << i << endl;
// }


// //--16-----------
// int first = 110;
// int*p = &first;
// int**q = &p;
// int second =(**q)++ +9;
// cout<<first <<" "<<second<<endl;


//---17----
int first = 100;
int *p = &first;
int**q = &p;
int second  = ++(**q);
int *r = *q;
++(*r);
cout<<first<<" "<<second<<endl;







    return 0;
}