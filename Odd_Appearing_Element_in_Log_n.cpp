#include<bits/stdc++.h>
using namespace std;

int oddApp(vector<int>& arr){
    int n = arr.size();

    int l=0,r=n-1;
    while(l<r){
        int mid = (l+r)/2;
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        else if(mid%2!=0){
            if(arr[mid]==arr[mid-1]){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
    }

    return arr[l];
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

    // sort(arr.begin(),arr.end());

    cout<<oddApp(arr);
}