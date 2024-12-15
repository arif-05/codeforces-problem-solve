//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m = (k*l)/nl;
    int a = c*d;
    int s = p/np;
    int b = min(m/n,min(a/n,s/n));
    cout<<b<<endl;
    return 0;
}