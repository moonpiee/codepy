#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

void fun(ll arr[],ll n){
   sort(arr,arr+n); 
   ll theft=0;
   for(ll i=1;i<n;i++){
    theft+=(arr[i]-arr[i-1]-1);
   }
   cout<<theft<<endl;
   
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    fun(p,n);
    return 0;
}