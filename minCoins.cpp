#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//debug the dp solution

int mincoins_Dp(int arr[], int n, int val){
    int dp[val+1]={INT_MAX};
    dp[0]=0;
    for(int j=1;j<=val;j++){
        for(int i=0;i<n;i++){
            if(arr[i]<=j){
                int mc=dp[j-arr[i]];
                if(mc!=INT_MAX){
                    dp[i]=min(dp[i],mc+1);
                }
            }
        }
    }
    return dp[val];
}

int mincoins(int arr[],int n,int val){
    if(val==0){
        return 0;
    }
    // if(val<0){
    //     return -1;
    // }

    int tot=INT_MAX;
    for(int i=0;i<n;i++){
        if(val>=arr[i]){
            int mc=mincoins(arr,n,val-arr[i]);
            if(mc!=INT_MAX){
                tot=min(tot,mc+1);
            }
        }
    }
    return tot;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,val;
    cin>>n>>val;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<mincoins(a,n,val)<<endl;
    cout<<mincoins_Dp(a,n,val)<<endl;

    return 0;
}