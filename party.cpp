#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    int c;
    for(int i=0;i<n;i++){
        int t=1;
        c=i;
        while(a[c]!=-2){
           c=a[c];
           t++;
        }
        ans=max(ans,t);
    }
    cout<<ans<<endl;


return 0;
}