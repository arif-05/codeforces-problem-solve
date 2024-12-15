#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m,c=0,p=0;
    cin>>n;
    while(n--){
        cin>>m;
        if(m==-1){
        if(p>0){
            p--;
            
        }else c++;
        } else p+=m;

    }
    cout<<c;
    return 0;
}