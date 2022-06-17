#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll fun(ll arr[],ll n){
    sort(arr,arr+n);
    if(arr[0]!=1) return 1;
    else{
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]!=1){
            return arr[i-1]+1;
        }
    }
    return -1;
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
    // cin>>s>>t;
    
    cout<<fun(p,n)<<endl;
    return 0;
}