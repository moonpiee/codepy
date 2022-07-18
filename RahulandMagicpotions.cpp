#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

void subr(int id,vector<int> inp,vector<vector<int>> &v,vector<int>& a,int n){
    if(id==n){
        
        v.push_back(a);
        // for(auto x:a)
        //     cout<<x<<" ";
        //     cout<<endl;
        return;
    }
    a.push_back(inp[id]);
    subr(id+1,inp,v,a,n);
    a.pop_back();
    subr(id+1,inp,v,a,n);
}

int main(){ //speed up strings
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    //int a[n];
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    vector<vector<int>> ans;
    vector<int> b;
    subr(0,a,ans,b,n);
    vector<int> m;
    int maxs=INT_MIN;
    for(auto x:ans){
        int s=0;
        int sz=x.size();
        for(auto p:x){
            s=s+p;
            //cout<<p<<" ";

        }
        if(s>=0){
            maxs=max(sz,maxs);
        }
        // cout<<endl;
    }
    cout<<maxs<<endl;
    
    return 0;
}