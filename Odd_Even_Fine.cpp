#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr,int n, int date, int fine){
    int ecnt=0,ocnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) ecnt++;
        else if(arr[i]%2!=0) ocnt++;
    }

    if(date%2==0){
        return ocnt*fine;
    }
    return ecnt*fine;
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

    int date;
    cin>>date;
    int fine;
    cin>>fine;

    cout<<solve(arr,n,date,fine);
}