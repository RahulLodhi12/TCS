#include<bits/stdc++.h>
using namespace std;

int sub9(int n){
    if(n<0 || n>1000000) return -1;
    int res=0;
    while(n){
        int d = n%10;
        res = res*10 + (9-d);
        n=n/10;
    }
    
    int ans=0;
    while(res){
        int d = res%10;
        ans = ans*10 + d;
        res/=10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<sub9(n);
}