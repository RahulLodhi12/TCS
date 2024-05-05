#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<vector<int>>& mat, int n, vector<vector<int>>& vis, vector<string>& ans, string move){
    //base case
    if(i==n-1 && j==n-1){
        ans.push_back(move);
        return;
    }

    vis[i][j]=1;//mark
    //down
    if(i+1<n && mat[i+1][j]==1 && vis[i+1][j]==0){
        solve(i+1,j,mat,n,vis,ans,move+"D");
    }
    //up
    if(i-1>=0 && mat[i-1][j]==1 && vis[i-1][j]==0){
        solve(i-1,j,mat,n,vis,ans,move+"U");
    }
    //left
    if(j-1>=0 && mat[i][j-1]==1 && vis[i][j-1]==0){
        solve(i,j-1,mat,n,vis,ans,move+"L");
    }
    //right
    if(j+1<n && mat[i][j+1]==1 && vis[i][j+1]==0){
        solve(i,j+1,mat,n,vis,ans,move+"R");
    }

    vis[i][j]=0;//unmark
}

vector<string> findAllPath(vector<vector<int>>& mat, int n){
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n,0)); //0->not vis and 1->visit
    solve(0,0,mat,n,vis,ans,"");
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> mat(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    vector<string> ans = findAllPath(mat,n);

    for(string s: ans){
        cout<<s<<" ";
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}