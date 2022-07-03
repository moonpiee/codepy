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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    b[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
       b[i]=a[i+1]+a[i];
    }
    for(int i=0;i<n;i++){
       cout<<b[i]<<" ";
    }
    return 0;
}