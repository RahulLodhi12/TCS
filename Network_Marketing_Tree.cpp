#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int profit;
    cin>>profit;

    int proPercent;
    cin>>proPercent;

    for(int i=0;i<n-1;i++){
        profit = (proPercent*profit)/100;
    }

    cout<<profit;
}