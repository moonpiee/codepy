#include<iostream>
using namespace std;
#include<math.h>
#include<bits/stdc++.h>
int main(){
    int a,b,r,d;
    cin>>a>>b>>r;
    // double pi=3.14159265358979323;
    // int d=floor(a*b/(pi*r*r));
    // cout<<d<<endl; // first-> 1
    if(min(a,b)>=2*r){
        d=floor(min(a,b)/(2*r));
    }
    else{
       d=1; 
    }
    if(d%2!=0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    
return 0;  
}