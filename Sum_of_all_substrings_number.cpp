#include<bits/stdc++.h>
using namespace std;

long long app1(string s,int n){
    long long sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=stoi(s.substr(i,j-i+1));
        }
    }
    return sum;
}

long long app2(string s, int n){
    long long sum=0;
    long long prev=0;
    long long curr;
    for(int i=0;i<n;i++){
        curr = prev*10 + (s[i]-'0')*(i+1);
        sum += curr;
        prev = curr;
    }
    return sum;
}

int main(){
    string s;
    getline(cin,s);

    int n=s.length();

    // cout<<app1(s,n);
    
    cout<<app2(s,n);
}