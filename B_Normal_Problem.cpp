//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string mirror(const string& a){
    string res = a;
    int n = a.size();

    for(int i=0; i<n; i++){
        char ch = a[n-i-1];
        if(ch=='p') res[i] = 'q';
        else if(ch=='q') res[i] = 'p';
        else res[i] = 'w';
    }
    return res;
    
}

int main(){
    int t;
    vector <string> reverse;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        reverse.push_back(mirror(a));
    }

    for(const string& b : reverse){
        cout<<b<<endl;
    }

    return 0;
}