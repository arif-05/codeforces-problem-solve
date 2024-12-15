//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c = n/m;
    int d = n%m;
    if(m*a<=b) cout<<n*a<<endl;
    else cout<<(n/m)*b+min((n%m)*a,b);

    return 0;
}