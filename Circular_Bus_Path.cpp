#include<bits/stdc++.h>
using namespace std;

int getFare(string src, string des){
    vector<int> path = {800,600,750,900,1400,1200,1100,1500};
    vector<string> busStop = {"TH","GA","IC","HA","TE","LU","NI","CA"};
    
    transform(src.begin(),src.end(),src.begin(),::toupper);
    transform(des.begin(),des.end(),des.begin(),::toupper);

    float ans=0;
    if(src == des) return -1;

    int st = 0;
    int ed = 0;
    for(int i=0;i<8;i++){
        if(src == busStop[i]) st = i;
        if(des == busStop[i]) ed = i;
    }

    int i=(st+1)%8;
    while(i != ed+1){
        ans += path[i];
        if(ed+1 == path.size()) break; 
        else i=(i+1)%8;
    }

    return ceil(ans*0.005);
}

int main(){
    string src;
    getline(cin,src);

    string des;
    getline(cin,des);

    cout<<getFare(src,des);
}