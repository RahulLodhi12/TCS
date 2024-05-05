#include<bits/stdc++.h>
using namespace std;

int gcdd(int a, int b){
    int res = min(a,b);

    while(res){
        if(a%res==0 && b%res==0){
            return res;
        }
        res--;
    }

    return -1;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<gcdd(a,b);
}