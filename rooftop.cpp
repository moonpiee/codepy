#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll bin_fun(ll arr[],ll n, ll k){
     int low=0,high=n-1;
       int c=0;
        while(low<=high){
            int mid=high-(high-low)/2;
            if((mid==0&&arr[mid]<arr[mid+1])||(mid==n-1&&arr[mid]<arr[mid-1])){
                return c;
            }
        
            if(arr[mid]>arr[low]){
                if(mid>0 && arr[mid]>arr[mid-1])
                    {
                    high=(mid-1);
                    c++;
                        
                    }
                    else if(mid>0 && arr[mid]>arr[mid-1]){
                        high=(mid-1);
                        c=0;

                    }
                
            }
            else if(arr[mid]>arr[high]){
                if(mid>0 && arr[mid]<arr[mid+1])
                {
                    low=(mid+1);
                    c++;
                        
                }
                 else if(mid>0 && arr[mid]<arr[mid+1]){
                    c=0;
                    low=(mid+1);
                 }
            }
            else{
                high=mid-1;
            }
        }
        return c;
}
ll maxStep(ll arr[], ll N)
    {
        int c=0;
        int ans=INT_MIN;
        for(int i=0;i<N;i++){
            cout<<arr[i]<<endl;
        }
       for(int i=1;i<N;i++){
           if(arr[i]>arr[i-1]){
               c++;
               ans=max(ans,c);
               cout<<ans<<endl;
           }
           else{
               c=0;
           }
       }
       //Your code here
       return ans==INT_MIN ? 0:ans;
    }

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
   cout<<maxStep(p,n);
          // cout<<bin_fun(p,n,k)<<endl;

    
    return 0;
}