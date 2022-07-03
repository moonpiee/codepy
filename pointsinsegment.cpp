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
    int n,k;
    cin>>k>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    while(k--){
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            a[i]++;
        }
    }
    
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    
   
    return 0;
}