#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile("newdoc.txt");
    myfile<<"242, 2, 47.02"<<" "<<"this is number 2"<<""<<"this is number 3, the last line";
    myfile.close();
    ifstream opoffile("newdoc.txt");
    string text;
    while(getline(opoffile,text)){
        cout<<text;
    }
    opoffile.close();
}