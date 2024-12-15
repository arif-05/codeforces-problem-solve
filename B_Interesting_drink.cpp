//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m,ans;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];

    }
    sort(a,a+n);
    cin>>m;
    while(m--){
        int k;
        cin>>k;
        ans = upper_bound(a,a+n,k)-a;
        cout<<ans<<endl;

    }
    
    return 0;
}