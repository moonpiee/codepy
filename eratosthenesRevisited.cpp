    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    #define ll unsigned long long int
    
    int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
        ll n=1000000000; 
        cout<<n;
        vector<ll> cumulative(n+1,0);
        vector<bool> arr(n+1,true);
        // memset(arr,true,sizeof(arr));
        for(ll i=2;i<=sqrt(n);i++){
            if(arr[i]==true){
                for(ll j=i*i;j<=n;j=j+i){
                    arr[j]=false;
                }
            }
        }
        arr[0]=false,arr[1]=false;
        ll s=0;
        for(int i=0;i<=n;i++){
            if(arr[i]==true){
                s++;
            }
            cumulative[i]=s;
        }

        ll t;
        cin>>t;
        while(t--){
            ll a,b;
            cin>>a>>b; 
            ll c=0;
            cout<<cumulative[b]-cumulative[a-1]<<endl;
        }
       
        return 0;
    }