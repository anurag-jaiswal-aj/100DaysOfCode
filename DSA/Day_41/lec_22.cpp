
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

#include <iostream>
using namespace std;

int main()
{
    string str ;
    cin >> str;
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }

    cout << "Modified string: " << temp << endl;
    return 0;
}
