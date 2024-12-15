//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isprime(long long n){
    if(n<2) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
    for(int i =3; i<=sqrt(n); i+=2){
        if(n%i==0) return false ;
    }
    return true;

}

int main(){
    int n,i;
    cin>>n;
    while(n--){
        long long m;
        cin>>m;
        long long sq = sqrt(m);
        if(sq*sq==m && isprime(sqrt(m))==true){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    

    }
    
    return 0;
}