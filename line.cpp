#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll line(ll n, ll m){
    if(n<0) return 0;
    if(n==0||n==1){
        return 1;
    }
    else{
        return line(n-2,m)+line(n-1,m);
    }
}
ll line1(ll n,ll m){
    ll f[n+1];
    for(ll i=0;i<n;i++){
        f[i]=0;
    }
    f[0]=1,f[1]=1;
    for(ll i=2;i<=n;i++){
        f[i]=f[i-2]%m+f[i-1]%m;
    }
    return f[n]%m;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,m;
    string s,t;
    cin>>n>>m;
    cout<<line1(n,m)%m<<endl;
    return 0;
}