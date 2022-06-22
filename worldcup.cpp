#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll fun(ll arr[],ll n){
    ll temp[n];
    ll i=0;
    while(1){
        temp[i]=(arr[i])-n-1;
        if(i>arr[i]&&temp[i]<=0){
            return i;
        }
        i=(i+1);
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    string s,t;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fun(arr,n)<<endl;
    return 0;
}