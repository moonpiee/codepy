#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l1,l2;
    set<int>s;
    cin>>n>>l1;
    for(int i=0;i<l1;i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    cin>>l2;
     for(int i=0;i<l2;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=1;i<=n;i++){
        if(s.find(i)==s.end()){
            cout<<"Oh, my keyboard!"<<endl;
           return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;

}