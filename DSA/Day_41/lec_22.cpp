
/*
#include <iostream>
using namespace std;

// ----------------------Length of a string------------------------

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// -----------------------Reverse a string----------------------------

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

// ---------------------------------Palindrome-----------------------------

bool checkPalindrome(char a[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolower(a[s]) != tolower(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// -----------------------------------maximum occuring character------------------------
char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

// --------------------------main function----------------------

int main()
{
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is: ";
    cout << name << endl;

    int len = getLength(name);
    cout << "Length:" << len << endl;

    reverse(name, len);

    cout << "Reverse of your name is: ";
    cout << name << endl;

    cout << "Palindrome or Not:" << checkPalindrome(name, len) << endl;

    string s;
    cout << "Enter the string:" << endl;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;

    return 0;
}

*/




// -----------------------------Remove Space--------------------------------------------



// #include <iostream>
// using namespace std;

// int main()
// {
//     string str ;
//     cin >> str;
//     string temp = "";

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     cout << "Modified string: " << temp << endl;
//     return 0;
// }




// ----------------------Remove all occurence of substring-----------------------------------------------


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s = "example string with part to remove";
//     string part = "part";

//     while (s.length() != 0 && s.find(part) < s.length()) {
//         s.erase(s.find(part), part.length());
//     } 

//     cout << s << endl;

//     return 0;
// }




// -------------------permutation in string----------------------

// #include <iostream>
// #include <string>
// using namespace std;

// bool checkPermutation(string s1, string s2) {
//     if (s1.length() != s2.length())
//         return false;

//     int count1[26] = {0};
//     int count2[26] = {0};

//     for (int i = 0; i < s1.length(); i++) {
//         int index = s1[i] - 'a';
//         count1[index]++;
//     }

//     for (int i = 0; i < s2.length(); i++) {
//         int index = s2[i] - 'a';
//         count2[index]++;
//     }

//     for (int i = 0; i < 26; i++) {
//         if (count1[i] != count2[i])
//             return false;
//     }

//     return true;
// }

// int main() {
//     string s1 = "abc";
//     string s2 = "bca";

//     if (checkPermutation(s1, s2))
//         cout << "s2 is a permutation of s1" << endl;
//     else
//         cout << "s2 is not a permutation of s1" << endl;

//     return 0;
// }




// -----------------------Remove all adjacent duplicate-------------------------------------

// #include <iostream>
// using namespace std;

// int main(){



//     return 0;
// }




// -----------------------String compression--------------------------

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    int ansIndex = 0;
    int n = chars.size();
    int i = 0;
    while (i < n) {
        int j = i + 1;
        while (j < n && chars[i] == chars[j]) {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if (count > 1) {
            string cnt = to_string(count);
            for (char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'c'};
    int compressedLength = compress(chars);
    for (int i = 0; i < compressedLength; ++i) {
        cout << chars[i];
    }
    cout << endl;
    return 0;
}
