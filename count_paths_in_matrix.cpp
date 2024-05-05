#include<bits/stdc++.h>
using namespace std;


int countWays(int i, int j, vector<vector<int>>& grid, int n, int m, int x, int y){
    if(i>=n || j>=m) return 0;
    if(i==x && j==y) return 0;
    if(i==n-1 && j==m-1) return 1;

    int right = countWays(i,j+1,grid,n,m,x,y);
    int down = countWays(i+1,j,grid,n,m,x,y);

    return right+down;
}


int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> grid(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }

    int x=1,y=1;

    cout<<countWays(0,0,grid,n,m,x,y);
}