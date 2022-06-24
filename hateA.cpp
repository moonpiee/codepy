#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//see i, i+1, substr, and corner cases
int main(){
    string s,s1,s2,chs;
    cin>>s;
    int n=s.length(),pos;
    
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            continue;
        }
        chs.push_back(s[i]);
    }
    bool f=false;
    int i;
    if(chs.length()==0){
        cout<<s<<endl;
        return 0;
    }
    int rpos;
    for(i=0;i<chs.length();i++){
        string chs1=chs.substr(0,i+1);
        string chs2=chs.substr(i+1,chs.length());
        if(chs1==chs2){
            rpos=n-(i+1);
            f=true;
        }
    }
    if(f&&s[n-1]!='a') cout<<s.substr(0,rpos)<<endl;
    else cout<<":("<<endl;

   return 0;
}