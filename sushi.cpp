#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);;;
    #endif
    ll n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m1=0,maxl;
    int t[n];
    for(int i=0;i<n;i++){
        if(v[i]==1){
            m1++;
        }
        else{
            m1--;
        }
        if(t[m1+n]>=-1){
            maxl=max(maxl,i-t[m1+n]);
        }
        else{
            t[m1+n]=i;
        }
    }
    cout<<maxl<<endl;
    return 0;
}