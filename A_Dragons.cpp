#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n,m,j,k,i;
    int f = 0;
    cin>>m>>n;
    pair<int,int>ar[1001];
    for(i=0;i<n;i++){
    cin>>ar[i].first>>ar[i].second;
    }
    sort(ar,ar+n);
    for(i=0;i<n;i++){
        if(m>ar[i].first){
            f=1;
            m+=ar[i].second;
        }else{f=0;}
    }
    
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}