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
    ll n,t;
    cin>>n>>t;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int r=0,d;
    if(v[0]<=t){
        cout<<v[0]/t<<" ";
    }
    else{
        r=t-v[0];
        cout<<v[0]/t<<" ";
    }
    for(int i=1;i<n;i++){
        if(v[i]<=r){
            cout<<(r+v[i])/t<<" ";
            r=t-(r+v[i]);
        }
        else{
            cout<<r+(v[i]-r)/t<<" ";
            r=(v[i]-r)%t;
        }
    }
    //cout<<maxl<<endl;
    return 0;
}