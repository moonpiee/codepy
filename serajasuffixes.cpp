#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,m;
    string s,t;
    cin>>n>>m;
    ll a[n+1],q=m;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll f[n+1];
    for(ll i=1;i<=n;i++){
        f[i]=0;
    }
    if(a[1]==1) f[1]=1;
    for(ll i=2;i<=n;i++){
        if(i==a[i]){
            f[i]=f[i]+f[i-1]+1;
        }
        else{
            f[i]=f[i]+f[i-1];
        }
    }
    for(ll i=1;i<=n;i++){
       cout<<f[i]<<" ";
    }
    while(q--){
        ll x;
        cin>>x;
        cout<<0<<endl;
    }
    
    return 0;
}