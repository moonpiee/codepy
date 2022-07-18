#include<iostream>
using namespace std;
int main(){
    int n,t;

    cin>>t;
    while(t--){
        cin>>n;
        int r=n%10;
        if(r<=5){
            if(n/10==0) {
                cout<<0<<endl;
                continue;
            }
            else{
            cout<<(n/10)*10<<endl;
            continue;
            }
        }
        else{
            if(n/10==0) {
                cout<<10<<endl;
                continue;
            }
            else{
                cout<<(n/10)*10+10<<endl;
                continue;
            }
        }
    }
return 0;
}