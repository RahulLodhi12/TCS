#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlower(vector<int>& bed, int f){
    int n = bed.size();

    for(int i=0;i<n;i++){
        if(bed[i]==0){
            bool leftKhali = (i==0 || bed[i-1]==0);
            bool rightKhali = (i==n-1 || bed[i+1]==0);

            if(leftKhali && rightKhali){
                bed[i] = 1;
                f--;
                if(f==0) return true;
            }
        }
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    vector<int> bed;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        bed.push_back(t);
    }

    int f;
    cin>>f;

    cout<<canPlaceFlower(bed,f);
}