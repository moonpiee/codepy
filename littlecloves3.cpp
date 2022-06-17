#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    int a=n/3;
    int b,c;
    bool got=false;
    bool didnt=false;
    while(1){
        if(a%3!=0){
            b=(n-a);
            if(b>=2) b=b/2;
            while(1){
                if(b%3!=0){
                    c=(n-a-b);
                    if(c%3!=0){
                        got=true;
                        break;
                    }
                    // else{
                    //     continue;
                    // }
                }
                // else{
                    b--;
                    continue;
                //}
            }
            if(got){
                break;
            }
        }
        // else{
            a--;
            continue;
        //}
        if(got){
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}