#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,k,x;
    int i, j;
    int m;
    cin>>m;
    for(int h=0; h<m; h++){
        int sum = 0, count = 0;
        cin>>n>>k>>x;
        if(k>(x+1)){
            cout<<-1<<endl;
        }
        else if(k>n){
            cout<<-1<<endl;
        }
        else{
            if(k>n&&k<x){
            for(int i=0; i<n; i++){
                sum = sum + i;
                }}
            else{
            for(int i=0; i<k; i++){
                sum = sum + i;
                count++;
            }
            if(k==x){
                for(int j = 0; j<(n-count); j++)
                sum = sum+(x-1);
            }
            else{
            for(int j = 0; j<(n-count); j++){
                sum = sum + x;
            }}}
            cout<<sum<<endl;
        }
    }
    return 0;
}