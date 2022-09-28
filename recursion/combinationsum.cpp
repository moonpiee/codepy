#include<iostream>
using namespace std;
#include<vector>
void comb(int i, int n, int s, int t,  vector<int> a, vector<int> d ){
    if(i==n){
        if(t==0){
            for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
            cout<<endl;
        }
            return;
    }
    if(a[i]<=t){
    d.push_back(a[i]);
    //s=s+a[i];
    comb(i,n,s,t-a[i],a,d);
    d.pop_back();
    }
    //s=s-a[i];
    comb(i+1,n,s,t,a,d);
}
int main(){
    vector<int> v;
    int n,x,sum;
    cin>>n>>sum;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(i);
    }
    vector<int>d;
    comb(0,n,0,sum,v,d);
}