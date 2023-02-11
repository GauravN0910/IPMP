#include <iostream>
using namespace std;

void Union(int *arr1, int *arr2, int s1, int s2)
{
    int i = 0, j = 0;
    while (i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }

       
    }
     while (i < s1)
    {
        cout << arr1[i++]<<" ";
    }
    while (j < s2)
    {
        cout << arr2[j++]<<" ";
    }
}

void Intersection(int *arr1, int *arr2, int s1, int s2)
{
    int i = 0, j = 0;
    while (i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr1[i++]<<" ";
            j++;
        }
    }
}

int main()
{
    int s1,s2;
    cin>>s1>>s2;
    int arr1[s1],arr2[s2];
    for(int i=0;i<s1;i++){
    	cin>>arr1[i];
	}
	for(int j=0;j<s2;j++){
		cin>>arr2[j];
	}
	
	cout<<"union"<<endl;
	Union(arr1,arr2,s1,s2);
	cout<<endl;
	cout<<"intersection"<<endl;
	Intersection(arr1,arr2,s1,s2);
}
    