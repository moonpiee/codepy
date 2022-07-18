#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
int main(){ //speed up strings
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
    int i=0,j=0;
    int c=0;
    
    while(1){
        j=i+1;
        if(a[i]>a[j]){
            swap(a[i],a[j]);
            j=i;
        }
        
    }

    return 0;
}