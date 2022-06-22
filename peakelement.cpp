#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll bin_fun(ll arr[],ll n, ll k){
     int l=0,h=n-1;
     while(l<=h){
    int mid=h-(h-l)/2;
        if((mid==0&&arr[mid]>=arr[mid+1])||(mid==n-1&&arr[mid]>=arr[mid-1])){
                return mid;
        }
        if(arr[mid]>=arr[mid+1]&&arr[mid]>=arr[mid-1]){
                return mid;
        }
        if(mid<n-1 && arr[mid]<arr[mid+1]){
            l=mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            h=mid-1;
        }
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,k;
    cin>>n>>k;
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
   
           cout<<bin_fun(p,n,k)<<endl;

    
    return 0;
}