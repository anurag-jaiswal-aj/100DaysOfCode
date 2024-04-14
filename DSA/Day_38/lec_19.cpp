

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

#include <iostream>
using namespace std;

int main()
{

    return 0;
}
