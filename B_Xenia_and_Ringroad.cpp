//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m;
    int initial = 1;
    long long count = 0;
    for(int i=1; i<=m; i++){
        cin>>k;
        if(k>=initial) count += k-initial;
        else count += n-(initial-k);

        initial = k;

    }
    cout<<count<<endl;

    return 0;
}