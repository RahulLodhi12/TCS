#include<bits/stdc++.h>
using namespace std;

int sumfib(int n){
    int a=0,b=1;
    int sum=a+b;
    for(int i=2;i<n;i++){
        int c = a+b;
        sum += c;
        a = b;
        b = c;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<sumfib(n);
}