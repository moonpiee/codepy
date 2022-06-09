#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n=300000; 
    bool arr[n+1];
    memset(arr,true,sizeof(arr));
    for(ll i=2;i<=sqrt(n);i++){
        if(arr[i]==true){
            for(ll j=i*i;j<=n;j=j+i){
                arr[j]=false;
            }
        }
    }
    arr[0]=false,arr[1]=false;
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b; 
        ll c=0;
        for(ll i=a;i<=b;i++){
            if(arr[i]==true){
                c++;
                cout<<i<<endl;
            }
        }
        cout<<c<<endl;
    }
   
    return 0;
}