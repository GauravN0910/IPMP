#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int left=0;
    int right=height.size()-1;
    int leftmax=0,rightmax=0;

    int water=0;
    while(left<right){
        leftmax=max(leftmax,height[left]);
        rightmax=max(rightmax,height[right]);

        if(leftmax<rightmax){
            water+=leftmax-height[left];
            left++;
        }
        else{
            water+=rightmax-height[right];
            right--;
        }
    }
    return water;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
}