#include<bits/stdc++.h>
using namespace std;

void sortByFreq(vector<int>& arr, int n){
    unordered_map<int,int> mpp;
    for(int it: arr) mpp[it]++;

    auto lambda = [&](int a, int b){
        return mpp[a]==mpp[b] ? a>b : mpp[a]<mpp[b];
    };

    sort(arr.begin(),arr.end(),lambda);
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    sortByFreq(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}