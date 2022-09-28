#include<iostream>
using namespace std;
#include<vector>
void sub(int i, int n, int s, int sum,  vector<int> a, vector<int> d ){
    if(i==n){
        if(s==sum){
            for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
            cout<<endl;
        }
            return;
    }
    d.push_back(a[i]);
    s=s+a[i];
    sub(i+1,n,s,sum,a,d);
    d.pop_back();
    s=s-a[i];
    sub(i+1,n,s,sum,a,d);
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
    sub(0,n,0,sum,v,d);
}