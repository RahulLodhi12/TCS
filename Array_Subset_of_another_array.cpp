#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>& arr1, vector<int>& arr2){
    unordered_map<int,int> mpp;

    for(int i=0;i<arr1.size();i++){
        mpp[arr1[i]]++;
    }

    for(int i=0;i<arr2.size();i++){
        if(mpp[arr2[i]]>0){
            mpp[arr2[i]]--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    vector<int> arr1;
    vector<int> arr2;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr1.push_back(t);
    }

    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        arr2.push_back(t);
    }

    cout<<isSubset(arr1,arr2);
}