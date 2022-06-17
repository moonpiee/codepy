#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;

// void isStupid(ll n){
//     int fib[n+1];
//     fib[0]=0;
//     fib[1]=1;
//     for(int i=2;i<=n;i++){
//         fib[i]=fib[i-1]+fib[i-2];
//     }
//     for(int i=1;i<=n;i++){
//         cout<<fib[i]<<endl;
//     }
//     int a,b,c;
//     bool found=false;
//     for(int i=1;i<=n;i++){
//         a=fib[i];
//         b=n-a;
//         for(int k=1;k<=n;k++){
//             if(b==fib[k]){
//                 for(int j=1;j<=n;j++){
//                     c=n-b;
//                     if(c==fib[j]){
//                     found=true;
//                     break;
//                     }
//                 }
//             }
//             if(found == true){
//                 break;
//             }
//         }
        
//         if(found) break;
//     }
//     if(found) cout<<a<<" "<<n-(a+c)<<" "<<c<<endl;
//     else cout<<"I'm too stupid to solve this problem"<<endl;
    
// }
void isStupid(ll n){
    ll f=0;
    ll s=1;
    vector<ll>fib;
    fib.push_back(f);
    fib.push_back(s);
    while(1){
        fib.push_back(f+s);
        f=s;
        s=fib.back();
        if(fib.back()==n){
            break;
        }
    }
    // for(int i=0;i<fib.size();i++){
    //     cout<<fib[i]<<endl;
    // }
    ll len=fib.size();
    ll s1=fib[len-1];
    for(ll i=len-2;i>=0;i--){
        if(fib[i])
    }



    
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    
    cin>>n;
    isStupid(n);
    return 0;
}