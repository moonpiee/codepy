#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
int main(){ //speed up strings
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,t,q;
    cin>>n>>t>>q;
    string s1,s2;
    cin>>s1>>s2;
    while(q--){
        int l,r;
        int c=0;
        cin>>l>>r;
        string sub=s1.substr(l-1,r-l+1);
        cout<<sub<<endl;
        bool found=false;
        for(int i=0;i<=sub.length()-t&&sub.length()>=t;i++){
            //int j;
            if(s2==sub.substr(i,t)){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}