#include<iostream>
#include<vector>
using namespace std;
int main(){
    //write cases
    vector<vector<int>> v;
    vector<vector<int>> v2;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            v[i][j]=1;
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>v2[i][j];
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(v2[i][j]%2!=0){
                if(i==1){
                    if(j<3){
                        v[i+1][j]=!v[i+1][j];
                        v[i][j+1]=!v[i][j+1];
                    }
                    else{
                        v[i][j-1]=!v[i][j-1];
                        v[i+1][j]=!v[i+1][j];
                    }
                }
                
            }
        }
    }

    return 0;
}