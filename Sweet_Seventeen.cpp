#include<bits/stdc++.h>
using namespace std;

int base17(string s){
    unordered_map<char,int> mpp;
    mpp['A'] = 10;
    mpp['B'] = 11;
    mpp['C'] = 12;
    mpp['D'] = 13;
    mpp['E'] = 14;
    mpp['F'] = 15;
    mpp['G'] = 16;

    int ans=0;
    int len = s.length()-1;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='G'){
            int num = mpp[s[i]];
            ans += num*pow(17,len)+0.5;
            len--;
        }
        else{
            int num = s[i] - 48;
            ans += num*pow(17,len)+0.5;
            len--;
        }
    }

    return ans;
}

int main(){
    string s;
    getline(cin,s);

    cout<<base17(s);
}