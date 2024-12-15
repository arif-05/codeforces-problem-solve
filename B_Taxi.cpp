#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int s, n, total, count[10]={0};
    cin>>n;
    while(n--){
        cin>>s;
        count[s]++;
    }
    total = count[4] + count[3] + count[2]/2;
    count[1]-=count[3];
    if(count[2]%2==1){
        total++;
        count[1]-=2;
    }
    if(count[1]>0){
        total+=(count[1]+3)/4;
    }
    cout<<total<<endl;

    return 0;
}