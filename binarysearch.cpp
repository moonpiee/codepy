#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll bin_fun(ll f[],ll n, ll k){
    ll l=0,h=n-1;
    while(l<=h){
        ll mid=h-(h-l)/2; //see this line
            if(k==f[mid]){
                return mid;
            }
            else if(k<f[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
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