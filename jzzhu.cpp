#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
#define mod 1e9+7

ll modulo(ll x, ll n){
    return (x%n + n)%n;
}

ll Jzzhu(ll a,ll b, ll n){
    n=modulo(n,mod);
    ll f[n+1];
    f[1]=a;
    f[2]=b;
    for(ll i=3;i<=n;i++){
        f[i]=(f[i-1]-f[i-2]);
    }
    return modulo(f[n],mod);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll a,b,n;
    cin>>a>>b>>n;
    cout<<(Jzzhu(a,b,n));
    return 0;
}