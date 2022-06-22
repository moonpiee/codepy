#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
ll mod = 1000000007;


ll Jzzhu(ll a,ll b, ll n){
    
    ll f[6],ans=0;
    f[0]=a,f[1]=b;
    for(ll i=2;i<=5;i++){
        f[i]=(f[i-1]-f[i-2]);
    }
    ans=f[(n-1)%6];
    return ans>=0 ? ans%mod : (ans%mod + mod)%mod; 
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