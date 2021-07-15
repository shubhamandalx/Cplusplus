#include <iostream>
using namespace std;
int reverse(int n)
{
    int reverseno = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverseno = reverseno * 10 + lastdigit;
        n = n / 10;
    }
    return reverseno;
}

void check(int n, int a)
{
    if (a == n)
        cout << "Yes it is palindrome no. " << endl;
    else
        cout << "NO, it is not :" << endl;
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int a = reverse(n);
    check(n, a);

    return 0;
}