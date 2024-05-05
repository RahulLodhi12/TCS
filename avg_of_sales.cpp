#include<bits/stdc++.h>
using namespace std;

double avg(vector<pair<string,pair<double,int>>> &arr, int n){
    double ans=0;
    for(int i=0;i<n;i++){
        ans += (arr[i].second.first*arr[i].second.second);
        // cout<<ans<<" ";
    }
    return ans/n;
}

int main(){
    int n;
    cin>>n;

    vector<pair<string,pair<double,int>>> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i].first; 
        cin>>arr[i].second.first; 
        cin>>arr[i].second.second;
    }

    cout<<avg(arr,n);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i].first<<" "<<arr[i].second.first<<" "<<arr[i].second.second<<endl;
    // }
}