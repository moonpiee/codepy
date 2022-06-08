#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//notes in docs.. for libraries and use of srand()

void passwordGen(string s, int n){
//string s = 'chandana765';
string pwd;
//srand(time(0));
    for(int i=0; i<n; i++){
        pwd[i] = s[(rand()) % n];
        cout<<pwd[i]<<endl;
    }
    cout<<"hire"<<endl;
 cout<<"Your customised password is: "<<pwd<<endl;
}

int main(){
    int n;
    string custom_s;
    cout<<"Enter the length of your password to be generated: "<<endl;
    cin>>n;
    cout<<"Enter the custom letters of password to be generated: "<<endl;
    for(int i=0;i<n;i++){
        cin>>custom_s[i];
    }
   passwordGen(custom_s,n);
   return 0;
}