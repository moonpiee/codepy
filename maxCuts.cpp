#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int maxcutsDp(int n, int a, int b, int c){
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=-1;
        if(i-a>=0) dp[i]=max(dp[i],dp[i-a]);
        if(i-b>=0)dp[i]=max(dp[i],dp[i-b]);
        if(i-c>=0)dp[i]=max(dp[i],dp[i-c]);
        if(dp[i]!=-1){
            dp[i]++;
        }

    }
    return dp[n];
}

int maxcuts(int n,int a,int b, int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int cut1=maxcuts(n-a,a,b,c);
    int cut2=maxcuts(n-b,a,b,c);
    int cut3=maxcuts(n-c,a,b,c);
    int max_cuts=max(max(cut1,cut2),cut3);
    if(max_cuts==-1){
        return -1;
    }
    else{
        return max_cuts+1;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    
    cout<<maxcuts(n,a,b,c)<<endl;
    cout<<maxcutsDp(n,a,b,c)<<endl;

    return 0;
}