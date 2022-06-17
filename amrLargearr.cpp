#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

void fun(ll p[],ll n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]==p[j]){
                
            }
        }
    }
    return ;
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
    fun(p,n);
    return 0;
}