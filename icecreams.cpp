#include<iostream>
using namespace std;
#include<math.h>
#include<bits/stdc++.h>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int s=0;
        int gm=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s=s+a[i];
        }
        sort(a,a+n);
        vector<int> v;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=0&&v.size()<=n-2){
                v.push_back(a[i]);
                gm=gm+a[i];
            }
        }

        if(gm>=s){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    
return 0;  
}