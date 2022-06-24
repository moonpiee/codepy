#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v,c(n,0);
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    c[0]=1;
    s.insert(v[0]);
    for(int i=1;i<n;i++){
       if(s.find(v[i])==s.end()){
            c[i]=c[i-1]+1;
            s.insert(v[i]);
        }
        else{
            c[i]=c[i-1];
        }
    }
     
  for(auto x:c){
    cout<<x<<endl;
  }
    return 0;
}