#include<bits/stdc++.h>
using namespace std;

int findNth(int n){
    n = n-1;
    if(n%2==0){ //even
        int p = n/2;
        return pow(2,p);
    }
    else{ //odd
        int p = n/2;
        return pow(3,p);
    }

    return -1;
}

int main(){
    int n;
    cin>>n;

    cout<<findNth(n);
}