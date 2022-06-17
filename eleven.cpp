#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    ll fib[n+1];
    fib[0]=1,fib[1]=1;
    for(ll i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    string str="";
    for(int i=0;i<n;i++){
        str=str+'o';
    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
    for(int i=0;i<=n;i++){
        cout<<fib[i]<<endl;;
    }n
    int j=0;
    while(fib[j]<=n){
        int id=fib[j];
        str[id-1]='O';
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
    cout<<endl;
    cout<<str<<endl;
    return 0;
}