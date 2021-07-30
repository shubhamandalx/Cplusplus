#include <iostream>
using namespace std;

int binarySearch(int a[],int key,int n)
{
    int low = 0, high = n-1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;

        else if (a[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Please enter the key : ";
    cin >> key;

    cout<<binarySearch(a, key,n)<<endl;

    return 0;
}