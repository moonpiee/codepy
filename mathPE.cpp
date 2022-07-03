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
    cin>>n;
    int a[n];
    bool v[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        v[i]=false;
    }
    int a1=0,a2=0,a3=0;
    int m=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            a1++;
        }
        else if(a[i]==2){
            a2++;
        }
        else if(a[i]==3){
            a3++;
        }
        m=min(a1,min(a2,a3));
    }
    //cout<<m<<endl;
    vector<int>c1,c2,c3;
    if(m==0){
        cout<<0<<endl;
        return 0;
    }
    
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]==1&&a1>0&&v[i]==false){
                c1.push_back(i+1);
                a1--;
                v[i]=true;
            }
        }
       
        j=0;
        for(int i=0;i<n;i++){
            if(a[i]==2&&a2>0&&v[i]==false){
                c2.push_back(i+1);
                a2--;
                v[i]=true;
            }
        }
        
        j=0;
        for(int i=0;i<n;i++){
           
            if(a[i]==3&&a3>0&&v[i]==false){
                c3.push_back(i+1);
                a3--;
                v[i]=true;
            }
        }
        cout<<m<<endl;
        int i=0;
        while(m--){
            cout<<c1[i]<<" "<<c2[i]<<" "<<c3[i]<<endl;
            i++;
        }
    
    
    return 0;
}