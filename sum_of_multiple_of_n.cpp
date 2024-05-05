#include<bits/stdc++.h>
using namespace std;

int sumOfMultiple(int n){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum += n*i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<sumOfMultiple(n);
}