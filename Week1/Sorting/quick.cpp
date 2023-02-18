#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &v, int start, int end)
{

    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
    {
        if (v[i] < v[pivot])
        {
            swap(v[i], v[j]);
            ++j;
        }
    }
    swap(v[j], v[pivot]);
    return j;
}

void Quicksort(vector<int> &v, int start, int end)
{

    if (start < end)
    {
        int p = Partition(v, start, end);
        Quicksort(v, start, p - 1);
        Quicksort(v, p + 1, end);
    }
}

int main()
{

    vector<int> v = {9, 1, 3, 59, 2, 3, 5};
    Quicksort(v, 0, v.size() - 1);
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << "\n\n";
}