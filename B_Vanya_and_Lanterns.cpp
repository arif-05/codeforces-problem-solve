#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,l,i,r;
    cin>>n>>l;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    r = max(a[0],l-a[n-1])*2;
    for(i=0;i<n-1;i++){
        r = max(r,a[i+1]-a[i]);
    }
    cout.precision(10);
    cout<<fixed<<r/2.0<<endl;


    return 0;
}