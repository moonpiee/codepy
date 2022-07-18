#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d;
        d=2;
        
        cout<<d<<endl;
        for(int i=1;i<=n;i=i+2){
            for(int j=i;j<=n;j=j*2){
                cout<<j<<" ";
            }
        }
        
        
        cout<<endl;
    
    }
    return 0;
}