#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<string,pair<int,pair<char,string>>>> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second.first;
        cin>>arr[i].second.second.first;
        cin>>arr[i].second.second.second;
    }
    

    float gg=0;
    int nn=0;
    for(int i=0;i<n;i++){
        if(arr[i].second.first>20){
            cout<<arr[i].first<<" ";
        }
        if(arr[i].second.second.second=="Female"){
            gg += arr[i].second.second.first;
            nn++;
        }
    }
    cout<<endl;
    cout<<gg/nn;


    // for(int i=0;i<n;i++){
    //     cout<<arr[i].first<<" ";
    //     cout<<arr[i].second.first<<" ";
    //     cout<<arr[i].second.second.first<<" ";
    //     cout<<arr[i].second.second.second<<" ";
    //     cout<<endl;
    // }
}