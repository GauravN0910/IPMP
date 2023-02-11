#include <iostream>
using namespace std;

void nonrepeating(int *arr, int n, int *x, int *y)
{
    int xr = arr[0];
    *x = 0;
    *y = 0;

    for (int i = 1; i < n; i++)
    {
        xr = xr ^ arr[i];
    }

    int set = xr & ~(xr - 1);

    for (int i = 0; i < n; i++)
    {
        if (set & arr[i])
        {
            *x = *x ^ arr[i];
        }
        else
        {
            *y = *y ^ arr[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *x = new int;
    int *y = new int;
    nonrepeating(arr, n, x, y);
    cout << *x << " " << *y;
}