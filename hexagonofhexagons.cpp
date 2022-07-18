#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a,b,c;
    cin>>a>>b>>c;
    int ans=b*c+c*(a-1)+(a-1)*(b-1);
    cout<<ans<<endl;
   
return 0;
}