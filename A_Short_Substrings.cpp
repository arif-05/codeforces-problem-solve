//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,i;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        for(i=0;i<=a.length();i++){
            if(i==0){
                b+=a[i];
            }
            if(i%2!=0) b+=a[i];
        }
        cout<<b<<endl;
    }
    return 0;
}