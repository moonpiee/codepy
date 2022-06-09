#include<iostream>
using namespace std;
void permute(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        permute(left+right,ans+ch);
    }
}


int main(){
    permute("ABC","");
    return 0;
}