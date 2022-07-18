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
    ll h,m;
    cin>>h>>m;
    double l,d,c,n;
    cin>>l>>d>>c>>n;
    double a1,a2;
    if(h>=20){
        cout<< ceil (l/n) * 80*c/100;
        return 0;
    }
    ll h_l=(((20*60)-(h*60+m))*d)+l;
    a1= ceil (h_l/n)*c*80/100;
    a2=  ceil (l/n)*c;
    if(a1<a2) cout<<a1<<endl;
    else cout<<a2<<endl;
    return 0;
}