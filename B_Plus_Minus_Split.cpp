//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,i,sum=0;
    string a;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        cin>>a;
        for(i=0;i<n;i++){
            if(a[i]=='+') sum++;
            else sum--;

        }
        cout<<abs(sum)<<endl;
    }

    return 0;
}