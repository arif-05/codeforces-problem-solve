#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int i,n,cnt=0,com=1;
    cin>>n;
    int a[n];
    for(i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            cnt++;
            com = max(com,cnt);
        }else{
            cnt=1;
        }
    }   
    cout<<com<<endl; 
    
    return 0;
}