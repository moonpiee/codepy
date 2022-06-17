#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int f[n+1];
    f[0]=0,f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-2]+f[i-1];
    }
    return f[n];
}


int main(){
    cout<<fib(8)<<endl;
    return 0;

}