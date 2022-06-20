#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
ll binarysearch(ll p[],ll n, ll k){
    ll l=0,h=n-1,mid;
    while(l<=h){
        mid=h-(h-l)/2;
        if(p[mid]==k){
            l=mid+1;
        }
        else if(p[mid]<k){
            l=mid+1;
        }
        else if(p[mid]>k){
            h=mid-1;
        }
    }
    return p[l];
   
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,q;
    
    cin>>n;
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    cin>>q;
    ll a[q];
    for(ll i=0;i<q;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cout<<binarysearch(p,n,a[i])<<endl;
    }
  
    return 0;
}