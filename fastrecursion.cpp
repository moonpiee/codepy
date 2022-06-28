#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll f[n+1];
    f[0]=1;
    for(int i=1;i<=n;i++){
        f[i]=f[i-1]+f[i/2]+f[i/3];
    }
    cout<<f[n]<<endl;
    return 0;
}