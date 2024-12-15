//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool istrue = true;
        for(int j=n-1; j>0; j--){
            if(a[j]-a[j-1]>1){
                istrue = false;
                break;
            }
        }
        if(istrue) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}