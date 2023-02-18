#include<bits/stdc++.h>
using namespace std;

void printmaxi(vector<int> arr)
{
      int size=arr.size();
      stack<int> sk;
      sk.push(arr[size-1]);
     
    for (int i = size-2; i >= 0; i--)
    {
        if(arr[i] >= sk.top())
        {         
            sk.push(arr[i]);
        }
    }  
      while(!sk.empty()){     
        cout<<sk.top()<<" ";
          sk.pop();
    }
}

int main(){
    vector<int> arr={1,2,3,4,100,2,2,77,66,55,33,22,1};
    printmaxi(arr);

}