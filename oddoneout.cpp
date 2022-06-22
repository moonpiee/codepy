#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long int
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
ll fun2(ll p[], ll n){
    ll slow=p[0],fast=p[0];
    do{
        slow=p[slow];
        fast=p[p[fast]];
    }while(slow!=fast);
    slow=p[0];
    while(slow!=fast){
        slow=p[slow];
        fast=p[fast];
    }
    return slow;
}

ll fun3(ll p[],ll n){
    sort(p,p+n);
    ll c=1;

    for(ll i=1;i<n;i++){
        if(p[i]==p[i-1]){
            c=c+1;
        }
        else{
            if(c%2!=0) return p[i-1];
            c=1;
        }
    }
    if(c%2!=0) return p[n-1];

    return 0;
}
ll fr(ll p[], ll n, ll x){
    ll l=0,h=n-1;
    while(l<=h){
        ll mid=h-(h-l)/2;
        if(p[mid]==x){
            if(mid!=0 && p[mid-1]==x){
                h=mid-1;
            }
            else{
                return mid;
            }
        }
        else if(p[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
ll ls(ll p[], ll n, ll x){
    ll l=0,h=n-1;
    while(l<=h){
        ll mid=h-(h-l)/2;
        if(p[mid]==x){
            if(mid!=n-1 && p[mid+1]==x){
                l=mid+1;
            }
            else{
                return mid;
            }
        }
        else if(p[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
ll fun4(ll p[],ll n,ll x){
    
        if(fr(p,n,x)==-1){
        return 0;
        }
    
        else{
            return ls(p,n,x)-fr(p,n,x)+1;
        }
   
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
    sort(p,p+n);
    // cout<<fun4(p,n,x)<<endl;
    for(int i=0;i<n;i++){
        ll x=p[i];
        if(fun4(p,n,x)%2!=0){
            cout<<x;
            return 0;
        }
    }
    //cout<<fun3(p,n);
    return 0;
}