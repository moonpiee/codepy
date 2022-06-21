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
    ll n,m;
    string s,t;
    cin>>n>>m;
    if(n==2){
        cout<<n%m<<endl;
    }
    else{
        ll j=0,ans=0,sw=0;

        ll mid=n/2,i=0;
        while(j<=mid)
        {
            if(n-3-i >=0)
            {
                sw=2*(1+(n-3-i));
                i++;
                ans=ans+sw;
                
            }
            else{
                ans++;
            }
            j=j+1;
        }




        cout<<ans%m<<endl;
    }
    return 0;
}