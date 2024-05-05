#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
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

    sort012(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}