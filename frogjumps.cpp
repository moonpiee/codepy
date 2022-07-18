#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n=s.length();
        int ans=INT_MIN;
        int c=n;
        int p=n+1;
        while(c>=0){
            if(s[c-1]=='R'||c==0){
                ans=max(ans,p-c);
                p=c;
            }
            c--;
        }
    
        cout<<ans<<endl;
    }
return 0;
}