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
    ll n,x;
    string s;
    cin>>n;
    ll vita[7];
    for(ll i=0;i<7;i++){
        vita[i]=INT_MAX;
    }
    while(n--){
        cin>>x>>s;
        if(s.length()>1)
            sort(s.begin(),s.end());
        if(s=="A"){
            if(vita[0]==INT_MAX) vita[0]=x;
            vita[0]=min(vita[0],x);
        }
        else if(s=="B"){
            if(vita[1]==INT_MAX) vita[1]=x;
            vita[1]=min(vita[1],x);
        }
        else if(s=="C"){
            if(vita[2]==INT_MAX) vita[2]=x;
            vita[2]=min(vita[2],x);
        }
        else if(s=="AB"){
            if(vita[3]==INT_MAX) vita[3]=x;
            vita[3]=min(vita[3],x);
        }
        else if(s=="BC"){
            if(vita[4]==INT_MAX) vita[4]=x;
            vita[4]=min(vita[4],x);
        }
        else if(s=="AC"){
            if(vita[5]==INT_MAX) vita[5]=x;
            vita[5]=min(vita[5],x);
        }
        else if(s=="ABC"){
            if(vita[6]==INT_MAX) vita[6]=x;
            vita[6]=min(vita[6],x);
        }
    }
    
    for(ll i=0;i<7;i++){
        cout<<vita[i]<<endl;
    }

        ll min_abc=vita[6];
        ll min_a_b_c=vita[0]+vita[1]+vita[2];
        ll min_abbcca=min(min(vita[3]+vita[4],vita[4]+vita[5]),vita[5]+vita[3]);
        ll min_ab_c=min(min(vita[3]+vita[2],vita[4]+vita[0]),vita[5]+vita[1]);

        ll ans=min(min(min_abc,min_a_b_c),min(min_abbcca,min_ab_c));
        if(ans==INT_MAX){
            ans=-1;
        }
        cout<<ans<<endl;
    return 0;
}