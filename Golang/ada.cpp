#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
// int isprecise(double qt) {
//     String s = String.valueOf(atribute);
//     String[] split = s.split("\\.");
//     return split[1].length();
// }
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ifstream myFile;
    string line;
int lines;

    myFile.open("input.txt");

for(lines = 0; getline(myFile,line); lines++);

cout << lines << std::endl;
    
    // int t = 0;
    // string l;
    // ifstream fl("input.txt");
    // while (getline(fl, l)){
    //     ++t;
    // }
        
    // cout << "Number of lines in text file: " << t<<endl;
    int t=lines;
    int c=0;
    // for(int i=0;i<t;i++){
    //     int dt_pt,min;
    //     double qt;
    //     cin>>dt_pt>>min>>qt;
    //     if(dt_pt<=0||min<0||min>=60||qt<0.00||qt>100.00){
    //         continue;
    //     }
    //     else{
    //         c++;
    //     }
    // }
    cout<<c<<endl;
    return 0;
}