#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include <vector>
using namespace std;
#define ll long long
vector<string> v;
int c=0;
vector<string> morse(string s, ll n){
    if(n==0){
        c++;
        cout<<c<<endl;
        cout<<s<<endl;
        
        v.push_back(s);
        return v;
    }
    else
    {
    if(n>=1){
        morse(s+".",n-1);
    }
    
        
    if(n>=2){
        morse(s+"_",n-2);
    }
    
    }
    cout<<"c: "<<c<<endl;
    return v;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    vector<string> v;
    cout<<morse("",n).size();
    return 0;
}