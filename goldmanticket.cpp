#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
#define ll long long
 bool ticket(int arr[], int i,int n, int s){
     if(s<arr[i]){
         return false;
     }
     if(i>=n-1){
         return false;
     }
     if(s>arr[i]){
         s=arr[i]+arr[i+1];
         return ticket(arr,i+1,n,s);
     }
     //ll s=0;
     for(int i=1;i<n;i++){
         s=s+arr[i];
         if(ticket(arr,i+1,n,s)){
             break;
         }
     }
     if(ticket(arr,i+1,n,s)) return true;
     else{
         return false;
     }
 }


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    // string str;
    //cin>>str;
    int arr[n];
    // stringstream ss(str);
    // ll p;
    // ss>>p;
    // cout<<p<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<endl;
    }

    if(ticket(arr,0,n,arr[0]))
     cout<<"YES"<<endl;
     else{
         cout<<"NO"<<endl;
     }
    return 0;
}