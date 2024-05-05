// * #
#include<bits/stdc++.h>
using namespace std;

int cnt(string s){
    int c1 = 0;
    int c2 = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='#') c1++;
        else if(s[i]=='*') c2++;
    }

    return c1 - c2;
}

int main(){
    string s;
    getline(cin,s);

    cout<<cnt(s);
}