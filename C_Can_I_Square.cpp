//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool is_integer(double nu){
    return nu == floor(nu);
}

int main(){
    int t;
     int n;
     int i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        long long s = 0;
        for(i=0; i<n; i++){
            cin>>a[i];
            s+=a[i];
        }
        double r = sqrt(s);
        //if(s<4) cout<<"NO"<<endl;
         if(is_integer(r)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}