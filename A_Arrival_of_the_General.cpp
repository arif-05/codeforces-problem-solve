#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,i;
    int max_value = 0, min_value = 110;
    int maxi = 0, mini=0;
    cin>>t;
    for(i=1;i<=t;i++){
        int a;
        cin>>a;
        if(a>max_value){
            max_value = a;
            maxi = i;
        }
        if(a<=min_value){
            min_value = a;
            mini = i;
        }
    }

    if(maxi>mini)
    cout<<(maxi-1)+(t-mini)-1;
    else
    cout<<(maxi-1)+(t-mini);
    return 0;
}