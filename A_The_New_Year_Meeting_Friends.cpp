//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    int e = max(a,max(b,c));
    int f = min(a,min(b,c));
    int d = (e+f)/2;
    cout<<e-f<<endl;
    return 0;
}