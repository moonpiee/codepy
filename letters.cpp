#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll bin_fun(ll f[],ll n, ll k){
    ll l=0,h=n-1;
    while(l<=h){
        ll mid=h-(h-l)/2;
            if(k==f[mid]){
                return mid;
            }
            else if(k<f[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
    }
    return l;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,q;
    cin>>n>>q;
    ll p[n];
    ll a[q];
    ll f[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    for(ll i=0;i<q;i++){
        cin>>a[i];
    }
    f[0]=p[0];
    for(ll i=1;i<n;i++){
        f[i]=f[i-1]+p[i];
    }
    for(ll i=0;i<q;i++){
        ll k=a[i];
        ll room;
        ll id=bin_fun(f,n,k)+1;
        if(id>1){
            room=k-f[id-2];
        }
        else{
            room=k;
        }
        cout<<id<<" "<<room<<endl;
    }
    

    return 0;
}