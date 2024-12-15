//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll a_seat = min(a,m);
        ll c_seat_a = min(c, m-a_seat);
        
        ll b_seat = min(b,m);
        ll c_seat_b = min(c-c_seat_a, m-b_seat);
        ll total = a_seat + b_seat + c_seat_a + c_seat_b;

        cout<<total<<endl;
    }
    return 0;
}