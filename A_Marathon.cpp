//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        int count = 0;
        cin>>a>>b>>c>>d;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        cout<<count<<endl;

    }
    return 0;
}