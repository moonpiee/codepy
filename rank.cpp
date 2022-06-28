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
    ll n;
    string s,t;
    cin>>n;
    ll p[n];
    ll x;
    ll th_r;
    ll q=4;
    for(ll i=0;i<n;i++){
        p[i]=0;
       for(ll j=0;j<4;j++){
            cin>>x;
            p[i]=p[i]+x;
            if(i==0) th_r=p[i];
       }
    }
    sort(p,p+n,greater<int>());

    cout<<th_r<<endl;
    for(ll i=0;i<n;i++){
        //cout<<p[i]<<endl;
        if(th_r==p[i]){
            cout<<i+1;
            return 0;
        }
    }

    return 0;
}