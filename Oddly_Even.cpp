#include<bits/stdc++.h>
using namespace std;

int diff(string s){
    int s1=0,s2=0;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            s1 += s[i] - 48;
        }
        else{
            s2 += s[i] - 48;
        }
    }

    return abs(s1-s2);
}

int main(){
    string s;
    getline(cin,s);

    cout<<diff(s);
}