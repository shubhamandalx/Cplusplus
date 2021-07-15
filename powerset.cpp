#include <iostream>
using namespace std;

void powerset(string s, int i = 0, string curr = "")
{
    if (i == s.length())
    {
        cout << curr<<endl;
        return;
    }
  //  cout<<endl;
    powerset(s, i + 1, curr + s[i]);
    powerset(s, i + 1, curr);
}

int main()
{
    string s;
    cout << "Enter the string :";
    cin >> s;
    powerset(s);

    return 0;
}