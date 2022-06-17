#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int findceilid(int tail[],int l,int r, int x){
    while(l<r){
        int m=l+(r-l)/2;
        if(tail[m]>=x){
            r=m;
        }
        else{
            l=m+1;
        }
        
    }
    return r;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int len=0;
    
    int tail[n];
    tail[len]=1;
    len++;
    for(int i=1;i<n;i++){
        if(a[i]>tail[len-1]){
            tail[len]=a[i];
            len++;
        }
        else{
            int id=findceilid(tail,0,len-1,a[i]);
                tail[id]=a[i];
        }
        
    }
    
    cout<<len<<endl;
    return 0;
}