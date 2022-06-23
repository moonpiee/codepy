#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std; //debug this
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,m;
    string s,t;
    cin>>n>>m;
    ll p[n], r=m;
    for(int i=0;i<n;i++){
        ll pages=0; 
        cin>>p[i];
        if(p[i]<r){
            r=-p[i]+m;
            pages=0;
        }
        else if(p[i]>=r){
            
            p[i]=p[i]-r;
            r=p[i]%m;
            pages=pages+(p[i]/m);
            if(p[i]%m==0){
                pages++;
            }            
            
        }
        
        cout<<pages<<" ";
    }
    return 0;
}