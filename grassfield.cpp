#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int a[4];
        int c=0,ans=0;
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        for(int i=0;i<4;i++){
            if(a[i]==1){
                c++;
            }
        }
        if(c==0) ans=0;
        else if(c==1||c==2||c==3){
            ans=1;
        }
        else{
            ans=2;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}