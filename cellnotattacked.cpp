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
    int n,m;
    string s,t;
    cin>>m>>n;
    int x, y;
    int pos[m+1][m+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            pos[i][j]=true;
        }
    }
    int c1=0,c2=0;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        
        for(int k=1;k<=m;k++){ // doesnt work for 100000 1 300 400

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
        int ans=m*m-c1;
        cout<<ans<<" ";
    }
    
    return 0;
}