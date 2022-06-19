#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // make yourself comfortable with pointers. ex: char, string etc.,
    string s;
    int n;
    cin>>n;
    cin>>s;
    queue<char>q;
    int i=0;
    while(q.size()!=s.length()){
        q.push(s[i]);
        i++;
    } //what if queue of strings? didnt do any of such quests
    string p,r;
    int n1=n,n2;
    while(q.empty()==false){
         n2=p.length();
        if(p.empty()==true||p[n2-1]>=q.front()){
           p.push_back(q.front());
           q.pop();           
        }
        else if(n2!=0){
            r.push_back(p[n2-1]);
            // n2--;
            p.pop_back();
        }
    }
    n2=p.length();
    while(n2!=0){
        r.push_back(p[n2-1]);
        p.pop_back();
        n2--;
    }
    cout<<r<<endl;
    return 0;

}