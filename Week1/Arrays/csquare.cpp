#include <bits/stdc++.h>
#include <iostream>
using namespace std;


vector<int> perf(int n){
    vector<int> perfectsquares;
    int current=1,i=1;

    while(current<=n){
        perfectsquares.push_back(current);
        i++;
        current=pow(i,2);
    }
    return perfectsquares;
}

int getcount(int n){
    vector<int> squares=perf(pow(n,2));
    int count=0;

    for(int a=1;a<=n;a++){
        int as=pow(a,2);
        for(int i=0;i<squares.size();i++){
            int cs=squares[i];
            int bs=cs-as;
            int b=sqrt(bs);
            int c=sqrt(cs);

            if(c<a || find(squares.begin(),squares.end(),bs)==squares.end()){
                continue;
            }
            if((b>=a) && (c>=b) && (as+bs==cs)){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<getcount(n);
}