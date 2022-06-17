#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

void fun(ll arr[],ll n,ll x){
    bool achieved=false;
    ll i,s=0;
    for(i=0;i<n;i++){
        s=s+arr[i];
        if(s>=x){
            achieved=true;
            break;
        }
    }
    if(achieved) cout<<i+1<<endl;
    else cout<<-1<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,x;
    cin>>n>>x;
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    fun(p,n,x);
    return 0;
}