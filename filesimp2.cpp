#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    ifstream opoffile("inp.txt");
    string text;
    
    vector<vector<string>> finalout;
    
    //>> extracts from streamfile, << inputs to streamfile
    //getline() or opofile>>text;
    while(getline(opoffile,text)){
        // cout<<text;
        stringstream s(text);
        string word;
        vector<string> row;
        int c=0;
        while(getline(s,word,',')){
            row.push_back(word);
            c++;
            if(c==1){
                int id;
                id=stoi(word);
                if(id<0){
                    break;
                }
            }
            else if(c==2){
                int min;
                min=stoi(word);
                    if(min<0||min>59){
                        break;
                    }
                
            }
            else if(c==3){
                float grade;
                grade=stoi(word);
                    if(grade<0.00||grade>100.00){
                        break;
                    }
                
            }
        }
        if(row.size()==3)
            finalout.push_back(row);
    }
    //vector<vector<int>> finalout2(finalout.size(),vector<int>(3,0));
    for(int i=0;i<finalout.size();i++){
        for(int j=0;j<finalout[i].size();j++){
            cout<<finalout[i][j]<<" ";
            //finalout2[i][j]=stoi(finalout[i][j]);
        }
        cout<<endl;
    }
    //group same quality with same batch id;
    //(id,start time), (quality, count)

    for(int i=0;i<finalout.size();i++){
        for(int j=0;j<finalout[i].size();j++){
            //cout<<finalout[i][j]<<" ";
            //finalout2[i][j]=stoi(finalout[i][j]);
        }
        //cout<<endl;
    }
    int i=0,n=finalout.size();
    int j=i+1;
    int c=1;
    while(i<n && j<n){
        if(finalout[i][0]==finalout[j][0]&&finalout[i][2]==finalout[j][2]){
                c++;
                j++;
        }
        else{
                if(c>=2){
                    cout<<finalout[i][0]<<" "<<finalout[i][1]<<" "<<finalout[i][2]<<" "<<c<<endl;
                }
                i=j;
                j=i+1;
                c=1;
        }
    }
    if(c>=2){
        cout<<finalout[i][0]<<" "<<finalout[i][1]<<" "<<finalout[i][2]<<" "<<c<<endl;
    }
   
    // for(int i=0;i<finalout2.size();i++){
    //     for(int j=0;j<finalout2[i].size();j++){
    //         cout<<finalout2[i][j]<<" ";
    //         //finalout2[i][j]=stoi(finalout[i][j]);
    //     }
    //     cout<<endl;
    // }

    opoffile.close();
    // cout<<"test: "<<endl;
    //cout<<("6.62">"6.61");
}
//https://java2blog.com/read-csv-file-in-cpp/#:~:text=To%20read%20a%20CSV%20file%2C,variable%20as%20its%20second%20argument. 