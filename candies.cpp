#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//debug


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(x--){
        int a,b;
        cin>>a>>b;
        int s=0;
        for(int i=a;i<=b;i++){
            s+=arr[i];
        }
        cout<<s<<endl;
    }

    return 0;
}