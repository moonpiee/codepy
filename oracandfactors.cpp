#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//wrong answer
int sfac(long long j){
    for(int i=2;i<=sqrt(i);i++){
        if(j%i==0){
            return i;
        }
    }
    return j;
}

int main(){
     int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<n+2*k<<endl;
        }
        else{
            n=sfac(n)+n;
            k=k-1;
            cout<<n+2*(k)<<endl;
        }
    }

    
    return 0;
}