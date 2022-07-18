#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;

    vector<int>v;
    int i=2;
    if(n==3){
        v.push_back(3);
    }
    else{
    int d=n-2;
    v.push_back(2);
    int p=0;
    while(d!=3&&d!=0){
        p=d;
        d=d-2;
        v.push_back(2);
    }
    if(d==3) v.push_back(3);
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    
return 0;  
}