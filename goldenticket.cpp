#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
void isStupid(ll n){
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=1;i<=n;i++){
        cout<<fib[i]<<endl;
    }
    int a,b,c;
    bool found=false;
    for(int i=1;i<=n;i++){
        a=fib[i];
        b=n-a;
        if(b>=2) b=b/2;
        for(int j=1;j<=n;j++){
            if(b==fib[j]){
                c=n-b-a;
                for(int k=1;k<=n;k++){
                    if(c==fib[k]){
                        found=true;
                        break;
                    }
                }
                if(found) break;
            }
            else{
                b--;
                continue;
            }
            

        }
        if(found) break;
    }
    if(found) cout<<a<<" "<<b<<" "<<c<<endl;
    else cout<<"IAMSTUPID"<<endl;
    // bool lucky=false;
    // ll s=0,t,j;
    // for(ll i=0;i<n-1;i++){
    //     s=s+arr[i];
    //     t=0;
    //     for(j=i+1;j<n&&arr[j]!=0;j++){
    //         t=t+arr[j];
    //         if(t==s){
    //             lucky=true;
    //             t=0;
    //         }
    //         else if(t>s){
    //             break;
    //         }
    //     }
    //     if(t==0&&lucky==true){
    //         return true;
    //     }
    // }
    // return false;
    
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    string num;
    cin>>n;
  
        // while(j>-1){
        //     if(num==0){
        //         a[j]=0;
        //         j--;
        //     }
        //     else{
        //     a[j]=num%10;
        //     num=num/10;
        //     j--;
        //     }
    //     // }
    // for(ll i=0;i<n;i++){
    //     cout<<a[i]<<endl;
    // }
    isStupid(n);
    // if(isStupid(a,n)){
    //     cout<<"YES"<<endl;
    // }
    // else{
    // cout<<"NO"<<endl;
    // }
    return 0;
}