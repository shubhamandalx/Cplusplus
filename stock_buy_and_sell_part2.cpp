#include <iostream>
#define N 8
using namespace std;

void maxProfit(int a[])
{
    int profit = 0;
    for (int i = 1; i < N; i++)
    {
        if (a[i] > a[i - 1])
            profit += (a[i] - a[i - 1]);
    }
    cout<<profit;
}

int main()
{
    int a[N];
    cout << "Enter five random stocks : ";

    for (int i = 0; i < N; i++)
        cin >> a[i];

    cout << "Processing . . . \n";

    maxProfit(a);

    return 0;
}