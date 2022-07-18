#include<iostream>
using namespace std;
int main(){
    int t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        if((n%2==0 && k%2!=0) || (n%2!=0 && k%2==0)){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            //how to handle sum of numbers??
        }

    }
}