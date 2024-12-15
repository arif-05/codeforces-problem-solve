//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    { cin>> a[i]; }
    int l = 0;
    int r = n-1;
    int sscore = 0;
    int dscore = 0;
    for(i=0; i<n; i++){
        if(i%2==0){
            if(a[l]>a[r]){
                sscore += a[l];
                l++;
            }
            else if(a[r]>a[l]){
                sscore += a[r];
                r--;

            }
            else {
                sscore += a[l];
            }
        }else{
            if(a[l]>a[r]){
                dscore += a[l];
                l++;
            }
            else if(a[r]>a[l]){
                dscore += a[r];
                r--;

            }
            else {
                dscore += a[l];
            }
        }
    }
    cout<<sscore<<" "<<dscore<<endl;
    return 0;
}