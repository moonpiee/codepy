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
    ll n,m;
    string s,t;
    cin>>m>>n;
    ll x, y;
    ll pos[m+1][m+1];
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=m;j++){
            pos[i][j]=true;
        }
    }
    ll c1=0,c2=0;
    for(ll i=1;i<=n;i++){
        cin>>x>>y;
        
        for(ll k=1;k<=m;k++){
          if(pos[k][y]==true){
            pos[k][y]=false;
            c1++;
          }
          if(pos[x][k]==true){
            pos[x][k]=false;
            c1++;
          }  
        }
        
        // ll c=0;
        // for(ll i=1;i<=m;i++){
        //     for(ll j=1;j<=m;j++){
        //         if(pos[i][j]==true) c++;
        //     }
        // } 
        ll ans=m*m-c1;
        cout<<ans<<endl;
    }
    
    return 0;
}