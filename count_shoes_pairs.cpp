#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> str(n);

    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<str[i]<<" ";
    // }
    int cnt=0;
    for(int i=0;i<n;i++){
        string s = str[i];
        string t = str[i];
        if(s[s.size()-1]=='L'){
            t[s.size()-1]='R';
            cout<<t<<" ";
        }
        else{
            t[s.size()-1]='L';
        }
        str[i]="-1";
        for(int j=i+1;j<n;j++){
            if(t==str[j]){
                cnt++;
                str[j]="-1";
                break;
            }
        }
    }
    cout<<cnt;
}