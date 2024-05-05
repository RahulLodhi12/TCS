#include<bits/stdc++.h>
using namespace std;

int lcmm(int a, int b){
    int greater=max(a,b);
    int smaller=min(a,b);

    for(int i=greater; ;i+=greater){
        if(i%smaller == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<lcmm(a,b);
}