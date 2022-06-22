#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
//think of memory optimisation


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    
    cin>>n;
    ll p[n];
    unordered_map<ll,ll> m;
    
    // for(int i=0;i<n;i++){
    //     freq[i]=0;
    // }
    for(ll i=0;i<n;i++){
        cin>>p[i];
        //freq[p[i]]++;
    }
    for(ll i=0;i<n;i++){
        m[p[i]]++;
    }
    ll max_el=INT_MIN;
    for(auto x:m){
        max_el=max(max_el,x.second);
    }
    ll f=-1,s=-1;
    bool found;
    vector <vector<ll>> v;
    ll minseg=INT_MAX;
    // for(auto x:m){
    //     if(x.second==max_el)
    //     cout<<x.first<<endl;
    // }
    for(auto x:m){
        bool found=false;
        // cout<<"x: "<<x.first<<endl;
        if(x.second==max_el){
           for(int i=0;i<n;i++){
            if(x.first==p[i]){
                //f=p[i];
                for(int j=n;j>=i+1;j--){
                    if(x.first==p[j]){
                        //s=p[j];
                        if(f==-1 || j-i<minseg){
                            f=i;
                            s=j;
                            // cout<<f<<endl;
                            // cout<<s<<endl;
                            minseg=(s-f);

                        }
                         found=true;
                         break;
                    }
                }
            }
            if(found) break;
            
           }
        }
        
    }
    if(f!=-1&&s!=-1)
        cout<<f+1<<" "<<s+1<<endl;
    else
        cout<<1<<" "<<1<<endl; 
   

   return 0;
}