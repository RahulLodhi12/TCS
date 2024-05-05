#include<bits/stdc++.h>
using namespace std;

vector<int> slidingWindow(vector<int>& nums, int n, int k){
    vector<int> ans;
    list<int> l;
    int i=0,j=0;
    while(j<n){
        while(!l.empty() && nums[j]>l.back()) l.pop_back();
        l.push_back(nums[j]);
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ans.push_back(l.front());
            if(nums[i]==l.front()) l.pop_front();
            i++;
            j++;
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

    int k;
    cin>>k;

    vector<int> ans = slidingWindow(arr,n,k);

    for(int it: ans){
        cout<<it<<" ";
    }
}