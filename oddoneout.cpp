#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
//think of memory optimisation
ll fun(ll p[],ll n){
    unordered_map<ll,ll> m;
    for(ll i=0;i<n;i++){
        m[p[i]]++;
    }
    for(auto x:m){
        if(x.second%2!=0){
            return x.first;
        }
    }
    return -1;
   
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    string s,t;
    cin>>n;
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<fun(p,n);
    return 0;
}