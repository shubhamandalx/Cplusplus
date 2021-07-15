#include <iostream>
using namespace std;

bool isPali(string s, int l, int r)
{
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPali(s, l + 1, r - 1);
}

int main()
{
    string s;
    cout << "Enter the word : ";
    cin >> s;
    int l = 0;
    int r = s.length();

    if (isPali(s, l, r - 1))
        cout << "Palindrome\n";
    else
        cout << "Not a Palindrome\n";

    return 0;
}
