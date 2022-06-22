#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;
#define ll long long

ll f(ll d){
    return d*d+100*d+d/3;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,q;
    
    cin>>n;
    ll m;
     q=sqrt(n);
     m=q;
    while(f(m)!=n){
        if(f(m)>n){
            m=m-1;
        }
        else{
            m=m+1;
        }
    }
    cout<<m<<endl;
    
  
    return 0;
}