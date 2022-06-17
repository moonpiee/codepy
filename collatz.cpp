#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
void collatz(ll n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    if(n%2==0){
        n=n/2;
        collatz(n);
    }
    else if(n%2!=0){
        n=3*n+1;
        collatz(n);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    
    collatz(n);
    return 0;
}