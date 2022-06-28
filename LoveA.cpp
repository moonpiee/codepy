#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.length();
    int n_a=0,h=n/2,n_o=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            n_a++;
        }
        else{
            break;
        }
    }
    cout<<s<<endl;
    cout<<n<<endl;
    cout<<h<<endl;
    cout<<n_a<<endl;
    if(n_a==1){
        cout<<1<<endl;
        return 0;
    }
    if(n_a>h){
        cout<<n<<endl;
        return 0;
    }
    n_o=n-n_a;
    cout<<n_a+1<<endl;
    return 0;
}