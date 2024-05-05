#include<bits/stdc++.h>
using namespace std;

vector<int> productNotSelf(vector<int>& arr){
    vector<int> ans;

    
}

int main(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    vector<int> ans = productNotSelf(arr);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}