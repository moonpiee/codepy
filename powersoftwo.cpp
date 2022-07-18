#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,k;
    cin>>n>>k;
    int num=n;
    int c=0;
    while(num>0){
        num=num>>1;
        c++;
    }
    cout<<c<<endl;
    if(k>c){
        cout<<"NO"<<endl;
        return 0;
    }
    c=k;
    int b=0;
    while(b!=c){
        int v=n/pow(2,b);
        n=n-pow(2,b);
        cout<<pow(2,b)<<" ";
        b++;
    }
    
   
return 0;
}