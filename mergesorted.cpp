#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void shiftbyone(vector<int>& a,int id, int n){
        for(int i=n-1;i>id;i--){
            a[i]=a[i-1];
        }
        // if(id!=n) a[id]=0;
}
void Mergesorted(vector<int>& a,vector<int> &b, int m, int n) {
        int i=0,j=0,k=0;
        while(i<=m-1&&j<=n-1){
            if(a[i]>=b[j]){
                shiftbyone(a,i,m+n);
                a[i]=b[j];
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        while(j<=n-1){
            a[i]=b[j];
            i++;
            j++;
        }
}
int main(){
    vector<int>a,b;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m+n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }

    Mergesorted(a,b,m,n);
    for(auto x:a){
        cout<<x<<" ";
    }
return 0;
}