#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> matrix){
    int left=0,top=0,bottom=matrix.size()-1,right=matrix[0].size()-1,dir=0;
    vector<int> ans;

    while(top<=bottom && left<=right)
    {
        if(dir==0){

            for(int i=left;i<=right;i++)
            ans.push_back(matrix[top][i]);
            top++;
        }
        else if(dir==1){

            for(int i=top;i<=bottom;i++)
            ans.push_back(matrix[i][right]);
            right--;
        }
        else if(dir==2){

            for(int i=right;i>=left;i--)
            ans.push_back(matrix[bottom][i]);
            bottom--;
        }
        else if(dir==3){

            for(int i=bottom;i>=top;i--)
            ans.push_back(matrix[i][left]);
            left++;
        }
        dir=(dir+1)%4;
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{23,34,45,56},{123,234,345,456}};
    vector<int> ans=spiral(matrix);
    
    for(auto& i:ans){
        cout<<i<<" ";
    }
}