#include<bits/stdc++.h>
using namespace std;

int findNth(int n){
    // n=n-1;
    if(n%2==0){
        return (n-1)/2;
    }
    else{
        return n-1;
    }
}

int main(){
    int n;
    cin>>n;

    cout<<findNth(n);
}