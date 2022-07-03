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
    int n;
    string s;
    cin>>n;
   while(n--){
    cin>>s;
    int l=s.length();
    int ml=INT_MAX,i,j;
    bool found=false;
    for( i=0;i<l;i++){
        unordered_set<int>se;
        se.insert(s[i]);
        for( j=i+1;j<l;j++){
            if(se.find(s[j])==se.end()){
                se.insert(s[j]);
            }
            if(se.size()==3){
                found=true;
                ml=min(ml,j-i+1);
            }
        }
    }
    if(!found){
        cout<<0<<endl;
    }
    else{
    cout<<ml<<endl;
    }
   }
    
    
    return 0;
}