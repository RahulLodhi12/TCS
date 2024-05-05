#include<bits/stdc++.h>
using namespace std;

bool canArrange(vector<int>& arr, int k){
    unordered_map<int,int> mpp;

    for(int it: arr){
        mpp[it%k]++; //freq
    }

    for(int it: arr){
        int rem = it%k;

        if(rem==0){
            if(mpp[rem]%2!=0) return false;
        }
        else if(2*rem==k){ //why not k/2
            if(mpp[rem]%2!=0) return false;
        }
        else{
            if(mpp[rem] != mpp[k-rem]) return false;
        }
    }

    return true;
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

    int k;
    cin>>k;

    cout<<canArrange(arr,k);
}