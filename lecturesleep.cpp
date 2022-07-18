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
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    int c1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==1) c1+=a[i];
    }
    // cout<<c1<<endl;
    int c2=0,mt=0;
    for(int i=0;i<k;i++){
        if(b[i]==0) c2+=a[i];
        mt=max(mt,c2);
    }
    //implement sliding window
    int start=1;
    int end=start+k-1;
    int i=0,j=0,s=0;
    while(j<n){
            if(b[j]==0) s+=a[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                mt=max(mt,s);
                if(b[i]==0) s-=a[i];
                i++;
                j++;
            }
    }
    // cout<<mt<<endl;

    cout<<c1+mt<<endl;
    return 0;
}