#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
//wrong test cases

void ispres(vector<string> &lis, string g){
    for(int i=0;i<lis.size();i++){
        if(lis[i]==g){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}

void toadd(vector<string> &lis, string g){
    lis.push_back(g);
    return;
}
void todel(vector<string> &lis, string g){
    int pos=-1;
    for(int i=0;i<lis.size();i++){
        if(lis[i]==g){
            lis.erase(lis.begin()+i);
            // pos=i+1;
            break;
        }
    }
    //if(pos!=-1) lis.erase(lis.begin()+pos);//--goes out of bounds
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    char q;
    string g1,g2,g;
    cin>>n;
    vector<string> lis;
    while(n--){
        //cases for ?/+
        cin>>q>>g1>>g2;
        g=g1+g2;
        if(q=='?'){
            ispres(lis,g);
        }
        else if(q=='+'){
            toadd(lis,g);
        }
        else if(q=='-'){
            todel(lis,g);
        }
        // switch ('q')
        // {   case '?':
        //     ispres(lis,g);
        //     break;
        //     case '+':
        //     toadd(lis,g);
        //     break;
        //     case '-':
        //     todel(lis,g);
        //     break;
        //     default:
        //     return 0;
        // }

    }

    
    return 0;
}