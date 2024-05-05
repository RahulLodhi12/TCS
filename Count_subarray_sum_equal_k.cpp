#include<bits/stdc++.h>
using namespace std;

int countSubarray(vector<int>& arr, int n, int k){
    unordered_map<int,int> mpp; //mpp<sum,cnt>
    int sum=0;
    int cnt=0;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(mpp.find(sum-k)!=mpp.end()){
            cnt+=mpp[sum-k];
        }
        mpp[sum]++;
    }
    return cnt;
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

    cout<<countSubarray(arr, n, k);
}