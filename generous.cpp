#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

void generous(string s,ll n, ll k){
   int freq[26];
   bool upset=false;
   for(int i=0;i<26;i++){
    freq[i]=0;
   }
   for(int i=0;i<n;i++){
    freq[s[i]-97]++;
   }
   for(int i=0;i<26;i++){
    cout<<freq[i];
   }
   if(k>n){
    upset=true;
   }
   ll min_eq=n/k;
   
   for(int i=0;i<26;i++){
    if(freq[i]<min_eq && freq[i]!=0){
        upset=true;
    }
   }
   if(upset) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    //cout<<s;
    generous(s,n,k);
    return 0;
}