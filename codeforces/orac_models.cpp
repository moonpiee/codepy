    #include <iostream>
    #include <cmath>
    using namespace std;
   
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            long long n,c=0;
            cin>>n;
            long long a[n+1];
            for(long long i=1;i<=n;i++){
                cin>>a[i];
            }
            if(n==1){
                c=0;
            }
            else   {    long long i=3;
                        bool inc1=false;
                        if(n>=3 && a[1]<a[3]){
                            inc1=true;
                            c++;
                        } 
                        
                        while(i+3<n+1){
                            if(a[i]<a[i+3]){
                                if(inc1==true) c++;
                                else c=c+2;
                            }
                            else{
                                inc1=false;
                            }
                            i=i+3;
                        }
                        
                            //long long c=0;
                            // while(3*i-1<n){
                            //     if(a[i-1]<a[3*i-1]){
                            //         c++;
                            //     }
                            //     i=3+i;
                            // }
                            long long j=2;
                            bool inc2=false;
                            if(n>=2 && a[0]<a[1]){ 
                                inc2=true;
                                c++;
                            }
                            while(2+j<n+1){
                                if(a[j]<a[2+j]){
                                    if(inc2==true) c++;
                                    else c=c+2;
                                }
                                else{
                                    inc2=false;
                                }
                                j=2+j;
                            }  
            }
            if(c==0) c++;        
            cout<<c<<endl;
        }
        return 0;
    }