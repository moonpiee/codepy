#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//debug
bool all_max(int arr[],int n, int max_a){
    for(int i=0;i<n;i++){
        if(arr[i]!=max_a){
            return false;
        }
    }
    return true;
}

int main(){
  
    int n,k;
    cin>>n>>k;
    int arr[n];
    int max_a=INT_MIN,max_k=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        max_a=max(arr[i],max_a);
    }
    int y=k;
    int j=0;
   
    while(y!=0 && !all_max(arr,n,max_a)){
        for(int j=0;j<n&&y!=0;j++){
            if(arr[j]!=max_a){
                arr[j]+=1;
                y--;
            }
        }
    }
    if(y==0){
        max_k=max_a;
    }
    else{
        while(y!=0){
            for(int j=0;j<n&&y!=0;j++){
                arr[j]+=1;
                y--;
            }
        }
        for(int i=0;i<n;i++){
            max_k=max(max_k,arr[i]);
        }
    }
    cout<<max_k<<" "<<k+max_a<<endl;
return 0;    
}