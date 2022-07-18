#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long n;
    cin>>n;
    int len=0;
    int num=n;
    while(num>0){
        len++;
        num=num/10;
    }
    int ans=0;
    if(len!=1){
        for(int i=1;i<len;i++){
            ans=ans+pow(2,i);
        }
    }
    num=n;
    //cout<<ans<<endl;
    int k=0;
    while(num>0){
        if(num%10==7){
            ans=ans+pow(2,k);
        }
        num=num/10;
        k++;
    }
    ans=ans+1;
    cout<<ans<<endl;
    return 0;
}