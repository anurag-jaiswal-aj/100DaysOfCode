// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>> n;

//     int row= 1;

//     while (row<=n){

//         int col = 1;
//         while(col<=n){
//             cout<< col;
//             col = col +1;
//         }

//         cout<<endl;
//         row = row+1;
//     }

// }

// ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>> n;

//     int row= n;

//     while (row>=1){

//         int col = n;
//         while(col>=1){
//             cout<< col;
//             col = col - 1;
//         }

//         cout<<endl;
//         row = row - 1;
//     }

// }

// ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int row = 1;
//     int count = 1;

//     while (row <= n)
//     {

//         int col = 1;
//         while (col <= n)
//         {
//             cout<<count<<"  ";
//             count = count + 1;
//             col = col + 1;
//         }

//         cout << endl;
//         row = row + 1;
//     }
// }

// // ----------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// -----------------------Pattren-----------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int row = 1;
//     while (row<=n)
//     {
//         int col = 1;
//         while (col<=row)
//         {
//             cout<<row<<" ";
//             col = col+1;
//         }
//         cout<<endl;
//         row= row +1;

//     }

// }

// -----------------------Pattren-----------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of lines:";
//     cin >> n;

//     int num = 1;
//     int row = 1;

//     while (row <= n)
//     {

//         int col = 1;
//         while (col <= row)
//         {
//             cout << num << " ";
//             num = num +1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;

//     }

// }

// -----------------------Pattren-----------------------------------

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int num = i;
        while (j <= i)
        {
            cout << num << " ";
            num = num + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
