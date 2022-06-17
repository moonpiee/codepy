#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int fib(int n, vector<int>& dp)
{   
    if(n==1||n==0) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fib(n-1,dp)+fib(n-2,dp);  
    
}
int main(){
int n;
cin>>n;
// int dp[n+1];
vector<int> dp(n,-1);
// memset(dp,-1,sizeof(dp));
// dp(n,-1);
cout<<fib(n,dp); //pass array by refernce
return 0;

}