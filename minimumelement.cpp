#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

ll bin_fun(ll arr[],ll n){
    int low=0,high=n-1;
     
        while(low<=high){
            int mid=high-(high-low)/2;
            if((mid==0&&arr[mid]<=arr[mid+1])||(mid==n-1&&arr[mid]<=arr[mid-1])){
                return arr[mid];
            }
            if((arr[mid]<=arr[mid+1]&&arr[mid]<=arr[mid-1])){
                return arr[mid];
            }
            if(arr[mid]<arr[low]){
                high=(mid-1);
            }
            else if(arr[mid]>arr[high]){
                low=(mid+1);
            }
            else{
                high=mid-1;
            }
        }
        return -1;
}

int main(){
    #ifndef ONLINE_JUDGE 
    #endif
    ll n,k;          
    cin>>n;      
    ll p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
   
           cout<<bin_fun(p,n)<<endl;

    
    return 0;
}