#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>e,o;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            e.push_back(i);
        }
        else{
            o.push_back(i);
        }
    }
    for(int i=0;i<e.size();i++){
        o.push_back(e[i]);
    }
    cout<<o[k-1];
    return 0;
}