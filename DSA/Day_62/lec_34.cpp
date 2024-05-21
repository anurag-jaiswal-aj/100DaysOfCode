
// // ----------Reverse string using recursion-----------

// #include <iostream>
// using namespace std;


// void reverse(string& str,int i,int j){

//     cout<<"Call recieved for " << str<<endl;

//     //base case
//     if(i>j){
//         return ;
//     }

//     swap(str[i],str[j]);
//     i++;
//     j--;

//     //recursive call 
//     reverse(str,i,j);
// }

// int main(){

//     string name = "abcde";
//     cout<<endl;
//     reverse(name,0,name.length() -1);
//     cout<<endl;
//     cout<<name<<endl;

//     return 0;
// }






//-----------------------palindrome check-----------

#include <iostream>
using namespace std;


bool checkPalindrome(string str,int i , int j){

    //base case
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursie call  
        return checkPalindrome(str,1+1,j-1);
    }
}

int main(){
    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }



    return 0;
}