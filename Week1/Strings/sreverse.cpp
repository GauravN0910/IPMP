#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

void reverse(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}

int main()
{
    string str;
    cin >> str;
    reverse(str);
}