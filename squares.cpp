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
    ll ms[3][3];
    ll r=0,s=0;
    vector <ll> v;
    int j;
    for(int i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>ms[i][j];
            r=r+ms[i][j];
            s=s+ms[i][j];
        }
        if(j==3){
            v.push_back(s);
            s=0;
        }
    }
    cout<<r<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // ll sum=0;
    // for(int i=0;i<v.size();i++){
    //     sum+=v[i];
    // }
    ll k=r/2;
    ms[0][0]=k-v[0];
    ms[2][2]=k-v[2];
    ms[1][1]=k-v[1];


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ms[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}