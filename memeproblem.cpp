#include<iostream>
#include<vector>
using namespace std;
int main(){
    string dec;
    int b;
    //cin>>s;
    //getline(cin>>ws,s); //consumes whitespaces, getline has 2 arguments
    getline(cin,dec);
    cout<<dec<<endl;
    if(dec[0]=='c'){
        b=1;
    }
    else if(dec[0]=='l'){
        b=8;
    }
    else{
        b=4;
    }
    string rem;
    //'0'=48
    int sz=0,i=0,j=0;
    while(dec[j]!=']'){
        if(dec[i]=='['){
            j=i+1;
            while (dec[j]!=']'){
                sz=10*sz+((int) dec[j]-48);
                j++;
            }
        }
        else{
            i++;
        }
    }
    cout<<sz*b<<endl;
    return 0;
}