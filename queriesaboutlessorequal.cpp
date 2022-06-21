#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll bin_fun(ll f[],ll n, ll k){
    ll l=0,h=n-1;
    while(l<=h){
        ll mid=h-(h-l)/2;
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
    return l-1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll a,b;
    cin>>a>>b;
    ll p[a];
    ll q[b];
    
    for(ll i=0;i<a;i++){
        cin>>p[i];
    }
    for(ll i=0;i<b;i++){
        cin>>q[i];
    }
    sort(p,p+a);
    ll f[a];
    f[0]=1;
    for(int i=1;i<a;i++){
        if(f[i]>=f[i])
            f[i]=f[i-1]+1;
    }
    // for(int i=0;i<a;i++){
    //    cout<<f[i]<<endl;
    // }
    for(ll i=0;i<b;i++){
        ll k=q[i];
        if(k>=p[a-1]){
            cout<<f[a-1]<<endl;
        }
        else
        {
           cout<<bin_fun(p,a,k)+1<<endl;
        }
    }
    
    return 0;
}