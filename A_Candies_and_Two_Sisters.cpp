#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m,t;
    cin>>n;
    while (n--)
    {
        /* code */
        cin>>m;
        
        if(m%2==0)cout<<m/2-1<<endl;
        else cout<<(m-1)/2<<endl;

    }
    
    return 0;
}