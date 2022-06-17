#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;


void fibsum(ll n){
    ll f=0;
    ll s=1;
    vector<ll>fib;
    fib.push_back(f);
    fib.push_back(s);
    while(1){
        fib.push_back(f+s);
        f=s;
        s=fib.back();
        if(fib.back()==n){
            cout<<"yes"<<endl;
            return;
        }
        else if(fib.back()>n){
            break;
        }
    }
    // for(int i=0;i<fib.size();i++){
    //     cout<<fib[i]<<endl;
    // }
    ll len=fib.size();
    ll s1=fib[len-1];
    ll a,b;
    for(ll i=len-2;i>=0;i--){
        a=fib[i];
        // cout<<"a: "<<a<<endl;
        if(n!=0) b=n-a;
        else b=0;
        // cout<<"b: "<<b<<endl;
        for(ll j=i-1;j>=0;j--){
            if(b==fib[j]){
                cout<<"yes"<<endl;
                return;
            }
        }
    }
    cout<<"no"<<endl;
    return;    
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    
    cin>>n;
    fibsum(n);
    return 0;
}