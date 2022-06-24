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
    int a,b;
    cin>>a>>b;
    int p[a];
    
    for(int i=0;i<a;i++){
        cin>>p[i];
    }
   
    sort(p,p+a);
    int k;
    int l,h,mid,ans;
    while(b--){
        cin>>k;
        l=0,h=a-1,ans=0;
        while(l<=h){
            mid=h-(h-l)/2;
            if(k>=p[mid]){
                l=mid+1;
                ans=mid;
            }
            else{
                h=mid-1;
            }
        }
        cout<<ans<<" ";
    }
    
    return 0;
}