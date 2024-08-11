//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a[3],i,t;
    cin>>t;
    while(t--){
         for(i=0; i<3; i++){
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<a[1]<<endl;
    
    }
   

    return 0;
}