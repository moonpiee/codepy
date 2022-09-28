#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
 
    while(t--){
        int v[4];
        v[1]=-1,v[2]=-1,v[3]=-1;
        string s;
        cin>>s;
        int n=s.length();
        set<char>st;
        for(int i=0;i<n;i++){
            
            if(st.find(s[i])==st.end()) st.insert(s[i]);
            if(s[i]=='1'){
                v[1]=i;
            }
            else if(s[i]=='2'){
                v[2]=i;
            }
            else if(s[i]=='3'){
                v[3]=i;
            }
            if(st.size()==3){
                break;
            }
        }
 
        if(st.size()!=3){
            cout<<0<<endl;
        }
        else{
            int m=max(v[1],max(v[2],v[3]));
            int n=min(v[1],min(v[2],v[3]));
            cout<<m-n+1<<endl;
        }
 
    }
return 0;
}