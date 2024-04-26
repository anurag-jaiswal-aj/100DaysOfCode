

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

char getMaxOccCharacter(string s){
    
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
    cin >> s;

        return 0;
}