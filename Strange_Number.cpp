#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

bool isStrange(int n){
    int sq = sqrt(n);
    int maxiPrime = -1;

    for(int i=2;i<n;i++){
        if(n%i==0 && isPrime(i)){
            maxiPrime = i;
        }
    }
    return sq<maxiPrime;
}

int main(){
    int n;
    cin>>n;

    cout<<isStrange(n);
}