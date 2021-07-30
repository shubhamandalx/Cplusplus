#include <iostream>
using namespace std;

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int pivot = partition(a, l, h);

        quicksort(a, l, pivot - 1);
        quicksort(a, pivot + 1, h);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "test . . .\n";
    quicksort(a, 0, n - 1);
    cout << "Processing . . . \n";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}