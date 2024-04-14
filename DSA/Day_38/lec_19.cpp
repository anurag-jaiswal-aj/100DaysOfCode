

// -----------------------C++ STL--------------------------

// -------------------------STL Array-----------------------------

// #include <iostream>
// #include <array>
// using namespace std;

// int main(){

//     int basic[3] = {1,2,3};

//     array<int,4> a = {1,2,3,4};

//     int size = a.size();

//     for(int i = 0;i<size;i++){
//         cout<<a[i]<<endl;
//     }

//     cout<<"Element at 2nd Index is: "<< a.at(2)<<endl;
//     cout<<"Empty or not: "<< a.empty()<<endl;
//     cout<<"First Element: "<<a.front()<<endl;
//     cout<<"Last Element: "<<a.back()<<endl;

//     return 0;
// }

// ---------------------------------STL Vector--------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;

//     vector<int> a(5, 1);
//     cout << "Print a: " << endl;
//     for (int i : a)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     vector<int>last(a);
//     cout << "Print last: " << endl;
//     for (int i : last)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Size of the vector:" << v.capacity() << endl;

//     v.push_back(1);
//     cout << "Size of the vector:" << v.capacity() << endl;

//     v.push_back(2);
//     cout << "Size of the vector:" << v.capacity() << endl;

//     v.push_back(3);
//     cout << "Size of the vector(no of element + vacant space):" << v.capacity() << endl;
//     cout << "Size of vector(no of element)" << v.size() << endl;

//     cout << "Element at indx 2 is: " << v.at(2) << endl;

//     cout << "First Element: " << v.front() << endl;
//     cout << "Last Element: " << v.back() << endl;

//     cout << "Before Pop:" << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     v.pop_back();

//     cout << "After Pop" << endl;

//     for (int i : v)
//     {
//         cout << i << " ";
//     }

//     cout << "Size Before clear: " << v.size() << endl;
//     cout << "Capacity Before clear: " << v.capacity() << endl;

//     v.clear();

//     cout << "Size After clear: " << v.size() << endl;
//     cout << "Capacity After clear: " << v.capacity() << endl;

//     return 0;
// }

// --------------------------------Deque----------------------------

// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);
//     // for (int i : d)
//     // {
//     //     cout << i << " ";
//     // }

//     // d.pop_back();
//     // cout << endl;
//     // for (int i : d)
//     // {
//     //     cout << i << " ";
//     // }

//     cout << endl;

//     cout << "Print first index element:  " << d.at(1) << endl;

//     cout<<"Front: "<<d.front()<<endl;
//     cout<<"Back: "<<d.back()<<endl;

//     cout<<"Empty or not: "<<d.empty()<<endl;

//     cout<<"Before Erase: "<<d.size()<<endl;
//     // d.erase();
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"After Erase: "<<d.size()<<endl;
//     for(int i:d){
//         cout<<i<<endl;
//     }

//     return 0;
// }

// ---------------------------List-------------------------------

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(5,100);
    

    cout<<"Printing n: "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;


    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }


    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"Size of List is: "<<l.size()<<endl;



    return 0;
}