#include<bits/stdc++.h>
using namespace std;

int maxGuest(vector<int>& e, vector<int>& l){
    int maxiGuest = INT_MIN;
    int sum=0;
    int n = e.size();
    for(int i=0;i<n;i++){
        sum += e[i] - l[i];
        maxiGuest = max(maxiGuest,sum);
    }

    return maxiGuest;
}

int main(){
    int n;
    cin>>n;

    vector<int> e(n);
    vector<int> l(n);

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        e.push_back(t);
    }

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        l.push_back(t);
    }

    cout<<maxGuest(e,l);
}