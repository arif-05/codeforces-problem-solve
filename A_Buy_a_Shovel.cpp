//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int k,r,i;
    cin>>k>>r;
    for(i=1; i<=10; i++){
        if((k*i)%10==0 || (k*i-r)%10==0){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}