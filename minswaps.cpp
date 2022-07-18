#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a[n],temp[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp[i]=a[i];
    }
    sort(temp,temp+n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]=i;
    }
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int> v;
       if(temp[i]!=a[i]){
            v.push_back(i);
            v.push_back(m[temp[i]]);
            swap(a[i],m[temp[i]]);
            m[a[i]]=m[temp[i]];
            m[temp[i]]=i;
       }
       ans.push_back(v);
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
   
return 0;
}