#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    d=d/b;
    e=pow(c,d);
    if(a<=e) cout<<"NO";
    else cout<<"YES";
    return 0;
}