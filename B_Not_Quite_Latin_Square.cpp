//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,i,j;
    cin>>t;
    while(t--){
        int a1=0,b1=0,c1=0;
    char r[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>r[i][j];
            if(r[i][j]=='A') a1++;
            if(r[i][j]=='B') b1++;
            if(r[i][j]=='C') c1++;
        }
    }
    if(a1==2) cout<<"A"<<endl;
    else if(b1==2) cout<<"B"<<endl;
    else cout<<"C"<<endl;


    }
    return 0;
}