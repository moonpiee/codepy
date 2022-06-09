// q1 
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int rem=(23-h)*60+(60-m);
        cout<<rem<<endl;
    }
    return 0;
}