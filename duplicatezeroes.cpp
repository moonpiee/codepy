#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void shiftbyone(vector<int>& a,int id, int n){
        for(int i=n-1;i>id;i--){
            a[i]=a[i-1];
        }
        if(id!=n) a[id]=0;
}
void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size(); ){
            if(arr[i]==0){
                shiftbyone(arr,i+1,arr.size());
                if(i<arr.size()-2) i=i+2;
                else i++;
            }
            else{
                i++;
            }
        }
}
int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    duplicateZeros(a);
    for(auto x:a){
        cout<<x<<" ";
    }
return 0;
}