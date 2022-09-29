#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool isp(int i, int n){
//     if(i>sqrt(n)){
//         return true;
//     }
//     if(dp[i]!=-1) return dp[i];
//     if(n%i==0 || isp(i+1,n)==false){
//         return dp[i]=false;
//     }
//     return true;
// }

// bool isprime(int n){
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=0||n==1) cout<<0<<endl;
        else{
            vector<bool> dp(sqrt(n)+1,1);
            dp[0]=0,dp[1]=0;
            int i;
            for(i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    dp[i]=0;
                    break;
                }
            }
            cout<<dp[i]<<endl;
        }
    }
    return 0;
}