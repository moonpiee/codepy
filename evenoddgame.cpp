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
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Mahmoud"<<endl;
    }
    else{
        cout<<"Ehab"<<endl;
    }
   
    return 0;
}