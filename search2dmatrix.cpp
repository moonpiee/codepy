#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,h=n-1;
    int id=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]>k){
            h=m-1;
        }
        else if(a[m]<k){
            id=m;
            l=m+1;
        }
        else{
            id=m;
            break;
        }
    }
    if (id!=-1) cout<<id<<endl;
    return 0;
}