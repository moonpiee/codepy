#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //fstream library has 3 classes: ifstream,ofstream and fstream
    //ofstream class creates and writes to files

    //creating and opening a new file
    ofstream myfile("mydoc.txt");

    //writing to file (using insertion operator)
    myfile<<"Hii Moonpieee!!";

    //closing file (to clean memory){
    myfile.close();
    
}