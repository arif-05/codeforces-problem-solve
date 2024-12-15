//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,i=0;
    cin>>t;
    int ar[505];
    int max=0,min=0;
    while (t--)
    {
        int a,x;
        cin>>a>>x;
        if(a==1 && x>min) min=x;
        if(a==2 && x<max) max=x;
        if(a==3) 
        {ar[i]=x;
        i++;}

    }
    int k,f=1;

    for(int j=0; j<=i;j++){
        for(k=min; k<=max; k++){
        if(k!=ar[j]) {cout<<k<<endl;
        f=0;
        break;}
        }

    }
    if(f) cout<<0<<endl;
    
    return 0;
}