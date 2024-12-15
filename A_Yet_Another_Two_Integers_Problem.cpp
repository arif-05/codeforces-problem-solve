//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int m = max(a,b);
        int n = min(a,b);
        int z = m-n;
        if(z%10==0) cout<<z/10<<endl;
        else cout<<(z/10)+1<<endl;

    }
    return 0;
}