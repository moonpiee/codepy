    #include <iostream>
    #include <cmath>
    using namespace std;
    long long s_divisor(long long n){
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return i;
            }
        }
        return n;
    }
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            long long k,n;
            cin>>n>>k;
            while(k--){
                if(s_divisor(n)==2){
                    n=n+2*(k+1);
                    break;
                }
                else{
                    n=s_divisor(n)+n;
                }
            }
            cout<<n<<endl;
        }
    }