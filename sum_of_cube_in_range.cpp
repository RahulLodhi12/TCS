#include<bits/stdc++.h>
using namespace std;

long long summ(int n, int m){
    long long sum=0;
    for(int i=n;i<=m;i++){
        sum += i*i*i;
    }
    return sum;
}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<summ(n,m);
}