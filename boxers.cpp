#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n;
    cin>>n;
    vector<int>b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(auto x:b){
        if(s.find(x)==s.end()){
            s.insert(x);
        }
        else{
            if(s.find(x+1)==s.end()&&s.size()<n-1){
                if((x+1)<=150001) s.insert(x+1);
            }
            else if(s.find(x-1)==s.end()&&s.size()<n-1){
                if(x-1>0) s.insert(x-1);
            }
        }
    }
    cout<<s.size()<<endl;

    return 0;
}