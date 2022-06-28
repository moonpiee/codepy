#include<iostream>
using namespace std;
#define ll long long
#include<vector>
int main(){
    ll n,k;
    cin>>n>>k;
    ll e_s,o_s=1,n_e,n_o,ans;
    if(n%2==0){
        e_s=n/2+1;
        n_e=n/2;
        n_o=n/2;
    }
    else{
        e_s=n/2+2;
        n_e=n/2;
        n_o=n-n_e;
    }
    if(k<e_s){
        ans=1+(k-1)*2;
    }
    else{
        ll pos;
        pos=k-e_s+1;
        ans=2+(pos-1)*2;
    }
    cout<<ans<<endl;
    return 0;
}