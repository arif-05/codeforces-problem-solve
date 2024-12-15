//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c = a+b;
        if(c%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    
    }
    return 0;
}