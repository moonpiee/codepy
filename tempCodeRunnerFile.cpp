#include<iostream>
using namespace std;
#include<math.h>
#include<bits/stdc++.h>
int main(){
    int a,b,r;
    cin>>a>>b>>r;
    int pi=22/7;
    int d=floor(a*b/(pi*r*r));
    //cout<<d<<endl; // first-> 1
    if(d%2!=0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    
return 0;  
}