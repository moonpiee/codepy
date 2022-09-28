#include<iostream>
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if((n%2==0 && k%2!=0) || (n%2!=0 && k%2==0)){
            cout<<"NO"<<endl;
        }
        else{
            if(n>=k*k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }

    }
    return 0;
}