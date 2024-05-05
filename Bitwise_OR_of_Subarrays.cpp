#include<bits/stdc++.h>
using namespace std;

int bitwiseOR(vector<int>& nums, int n){
    set<int> st;

    for(int i=0;i<n;i++){
        st.insert(nums[i]);
        for(int j=i-1;j>=0;j--){
            if((nums[i]|nums[j])==nums[j]) break;
            nums[j] |= nums[i];
            st.insert(nums[j]);
        }
    }

    return st.size();
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<bitwiseOR(nums,n);
}