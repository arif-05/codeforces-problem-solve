#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string m;
    getline(cin,m);
    set<char>n;
    for(int i = 0; i<m.length(); i++){
        if(isalpha(m[i])){
            n.insert(m[i]);

        }
    }
    cout<<n.size()<<endl;
    return 0;
}