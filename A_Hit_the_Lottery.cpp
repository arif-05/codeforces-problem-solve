#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   int m, ans = 0;
   int a[5] = {100,20,10,5,1};
   cin>>m;
   for(int i = 0; i<5; i++){
    ans += m/a[i];
    m%=a[i];
   }
   cout<<ans<<endl;
    return 0;
}