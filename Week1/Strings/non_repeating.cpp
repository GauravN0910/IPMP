#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstNonRepeating(string str)
{
    pair<int, int> arr[256];
 
    for (int i = 0; str[i]; i++) {
        (arr[str[i]].first)++;
        arr[str[i]].second = i;
    }
 
    int res = INT_MAX;
    for (int i = 0; i < 256; i++)

        if (arr[i].first == 1)
            res = min(res, arr[i].second);
 
    return res; 
}

int main(){
    string str;
    cin>>str;
    int x=firstNonRepeating(str);

    cout<<str[x];
}