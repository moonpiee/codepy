#include <iostream>
using namespace std;

template <typename my_type> //for data type we want

my_type my_tempfunction(my_type x, my_type y){ //write template function
    return x==1 ? x:y;
}
template <typename T, int limit>
T find_max(T arr[], int n){
    if(n>limit) return -1;
    T res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>res){
             res=arr[i];
        }
    }
    return res;
}
//implementation of class template
template <typename Q>
struct Pair{
    Q x; // type members
    Q y;
    Pair(Q i, Q j){
        x=i,y=j;
    }
    Q getFirst(){ //type functions
        return x;
    }
    Q getSum();
    Q getSecond(){
        return y;
    }
};
//OUTSIDE CLASS declaring class function templates
template <typename Q> //writing definitions outside class
Q Pair<Q>::getSum(){
    return x+y;
}

int main(){
    cout<<my_tempfunction<int>(1,6)<<endl; //declare template with your data type
    int arr[]={5,11,2};
    const int lim=200;
    cout<<find_max<int,lim>(arr,3)<<endl; //function template with non data type class members
    Pair<int> p(10,40);
    //cout<<p.getSum()<<endl;
    cout<<p.getSecond()<<endl;
    return 0;
}