#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ifstream myFile;
    string line;
    int lines,c=0;

    myFile.open("input.txt");

    for(lines = 0; getline(myFile,line); lines++);

    int t=lines;
    int j=t;
    while(t--){
        char comm;
        int dt_pt,min;
        double qt;
        char c1, c2;
        cin>>dt_pt>>min>>qt;
        if(dt_pt<=0||min<0||min>=60||qt<0.00||qt>100.00){
                continue;
        }
        else{
            cout<<dt_pt<<", "<<min<<", "<<qt<<", "<<c<<endl;
        }    
    }
    
    return 0;
}