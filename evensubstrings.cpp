#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int arr[n];
    cin>>s;
    for(int i=0;i<n;i++){
        int ch=s[i];
        arr[i]=ch-48;
    }
    int c=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2==0){
            c+=i+1;
        }
    }
    cout<<c<<endl;
    return 0;
}