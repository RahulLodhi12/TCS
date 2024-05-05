#include<bits/stdc++.h>
using namespace std;

int sumDigit(int n){
    int ans=0;
    while(n){
        ans += n%10;
        n/=10;
    }
    return ans;
}

int solve(int sum){
    while(sum>=10){
        sum = sumDigit(sum);
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;

    if(r==0){
        cout<<0<<endl;
        return 0;
    }

    int s = sumDigit(n);
    int num = s*r;

    cout<<solve(num);
}