#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int k = 240-t;

    int sum = 0,l=0;
    for(int i = 1; i<=n; i++){
        sum= sum+i*5;
        if(sum>k) break;
        l=i;
    }
    cout<<l<<endl;

    

    return 0;
}