#include <math.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    long long int n=5;
    cout<<n;
    long long int num=73452;
    long long int sum=0;
    long long int a[n];
    cout<<n;
    for(int i=0; i<n; i++){
        a[i]=num%10;
        sum+=num%10;
        num/=10;
        cout<<num<<" ";
    }
    cout<<sum;
    for(long long int i=0; i<sum; i++){
        long long int temp=0, count=0;
        for(int j=0; j<n; j++){
            temp+=a[j];
            if(temp==i){
                temp=0;
                count++;
            }
        }
        if(temp==0 && count>0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    
    return 0;
}