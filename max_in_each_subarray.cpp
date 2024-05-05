#include<bits/stdc++.h>
using namespace std;

void maxEachSub(vector<int>& arr, int n, int k, vector<int>& res){
    int maxi;
    for(int i=0;i<=n-k;i++){
        maxi = INT_MIN;
        for(int j=i;j<k+i;j++){
            maxi = max(maxi,arr[j]);
        }
        res.push_back(maxi);
    }
}

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> res;
    maxEachSub(arr,n,k,res);

    for(int it: res){
        cout<<it<<" ";
    }
}