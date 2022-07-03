#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,q;
    string s;
    cin>>n>>q>>s;
    int l,r;
    while(q--){
        
        cin>>l>>r;
        char maxs=s[l-1];
        for(int i=l;i<r;i++){
            if(s[i]=='G'){
                maxs='G';
            }
            else if(maxs!='G'&&s[i]=='S'){
                maxs='S';
            }
            else if(maxs!='G'&&maxs!='S'&&s[i]=='B'){
                maxs='B';
            }
        }
        cout<<maxs<<endl;

    }
    return 0;
}