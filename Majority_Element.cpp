#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& arr, int n){
    unordered_map<int,int> mpp;
    vector<int> ans;
    for(int it: arr){
        mpp[it]++;
        // cout<<it<<" ";
    }

    for(auto it: mpp){
        if(it.second >= n/2){
            ans.push_back(it.first);
            // cout<<it.first<<" ";
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> res = majorityElement(arr, n);
    for(int it: res){
        cout<<it<<" ";
    }
}