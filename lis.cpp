#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//debug
int lis_tab(int arr[],int n){
    int dp[n];
    dp[0]=1; //lis for i=0
   
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[i],dp[j]+1);
                
            }
        }        
    }
    int maxdp=dp[0];
    for(int i=0;i<n;i++){
        if(dp[i]>maxdp){
            maxdp=dp[i];
        }
    }
    return maxdp;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lis_tab(arr,n);
}