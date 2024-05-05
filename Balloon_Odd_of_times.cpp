#include<bits/stdc++.h>
using namespace std;

char OddTimes(vector<char>& arr){
    map<char,int> mpp;

    for(auto it: arr){
        mpp[it]++;
    }

    for(auto it: mpp){
        if(it.second%2 != 0){
            return it.first;
        }
    }

    return -1;
}

int main(){
    int n;
    cin>>n;

    vector<char> arr;

    for(int i=0;i<n;i++){
        char t;
        cin>>t;
        arr.push_back(t);
    }

    cout<<OddTimes(arr);
}