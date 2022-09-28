#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //ifstream/fstream class is used to read files
    ifstream opoffile("mydoc.txt");

    //initialise string to output file
    string text;

    //use while loop with getline() of ifstream to read every line of file
    while(getline(opoffile,text)){
        cout<<text;
    }
    
    //close file
    opoffile.close();
}