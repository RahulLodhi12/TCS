#include<bits/stdc++.h>
using namespace std;

int toggle(int n){
    int temp=1;

    while(temp<=n){
        n = n^temp;
        temp = temp<<1;
    }

    return n;
}

int main(){
    int n;
    cin>>n;

    cout<<toggle(n);

}