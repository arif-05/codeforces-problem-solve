//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        string m;
        cin>>m;
        for(int i = 0; i<m.length(); i++){
            m[i] = toupper(m[i]);
        }
        if(m=="YES") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}