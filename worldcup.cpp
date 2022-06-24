#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int t=0;
    int i;
    bool found=false;
    while(found==false){
        for(i=0;i<n;i++){ //common mistake of variables.
        // declaring ll also causes TLE beware
            if(arr[i]<=t++){
                cout<<i+1;
                found=true;
                break;
            }
        }
    }
    
    return 0;
}