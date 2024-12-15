#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    long long int p=100,x;
    cin>>x;
    int a=0;
    while(x>p){
        p = p + p/100;
        a++;
        
    }
    cout<<a;
    
    return 0;
}
