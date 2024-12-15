//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,a,b,c,m;
    cin>>t;
    while(t--){  
        cin>>a>>b>>c;
         m = max(a,max(b,c));
        if( m==c && m==a+b)
        cout<<"YES"<<endl;
        else if( m==a && m==c+b)
        cout<<"YES"<<endl;
        else if( m==b && m==a+c)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}