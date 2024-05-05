#include<bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
int diff1(vector<vector<int>>& mat){
    int n = mat.size();
    int s1=0;
    int s2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                s1 += mat[i][j];
            }
            if(i+j == n-1){
                s2 += mat[i][j];
            }
        }
    }

    return abs(s1-s2);
}

// Approach 2: Single Traversal
int diff2(vector<vector<int>>& mat){
    int n = mat.size();
    int s1=0;
    int s2=0;
    for(int i=0;i<n;i++){
        s1 += mat[i][i];
        s2 += mat[i][n-1-i];
    }

    return abs(s1-s2);
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> mat(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            mat[i].push_back(t);
        }
    }

    // cout<<diff1(mat);

    cout<<diff2(mat);
}