#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;

    // int n=nums.size();
        int msf=INT_MAX;
        int ans;
        
        for(int i=0;i<n-2;i++){
            cout<<i<<endl;
            int l=i+1;
            int r=n-1;
            //if(i!=0&&nums[i]==nums[i-1]) continue;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if((s)<target){
                    l++;
                }
                else if((s)>target){
                    r--;
                }
                if(abs(s-target)<=abs(msf-target)){
                    msf=s;
                    //cout<<msf<<endl;
                }
            }
        }
       cout<<msf<<endl;
}