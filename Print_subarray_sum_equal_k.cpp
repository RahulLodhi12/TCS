#include<bits/stdc++.h>
using namespace std;

void printSubarraySumEqualK(vector<int>& arr, int n, int k){
    unordered_map<int,int> mpp; //mpp<sum,index>
    int sum=0;

    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum==k){
            ans.push_back(vector<int>(arr.begin(),arr.begin()+i+1));
            // cout<<'0'<<" "<<i<<endl;
        }
        if(mpp.find(sum-k)!=mpp.end()){
            int idx = mpp[sum-k]+1;
            ans.push_back(vector<int>(arr.begin()+idx,arr.begin()+i+1));
            // cout<<idx<<" "<<i<<endl;
        }
        mpp[sum]=i;
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    printSubarraySumEqualK(arr, n, k);
}