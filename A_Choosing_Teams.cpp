//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,k,count = 0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]+k<=5) count++;

    }
    cout<<count/3<<endl;

    return 0;
}