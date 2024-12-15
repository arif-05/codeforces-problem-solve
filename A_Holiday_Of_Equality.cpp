//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,i,j,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(j=0;j<n;j++){
        count+=(a[n-1]-a[j]);
    }
    cout<<count<<endl;
    return 0;
}