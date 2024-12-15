//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,i,j;
    string st;
    cin>>t;
    while(t--){
        
        cin>>st;
        int sum1=0,sum2=0;
        for(i=0;i<3;i++){
            sum1+=st[i];
        }
        for(j=5;j>2;j--){
            sum2+=st[j];
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
        
    }
    
    return 0;
}