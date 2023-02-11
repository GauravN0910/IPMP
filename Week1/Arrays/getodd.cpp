#include <iostream>
#include <unordered_map>
using namespace std;

int getodd(int *arr, int n)
{
	unordered_map<int, int> x;
	for (int i = 0; i < n; i++)
	{
		x[arr[i]]++;
	}
	for (auto &i : x)
	{
		if (i.second % 2 != 0)
		{
			return i.first;
		}
	}
	return -1;
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
	cout<<getodd(arr, n);
}
