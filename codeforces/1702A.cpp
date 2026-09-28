#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        long long m;
        cin>>m;
        long long n=0,x=m;
        while(x>0){
            x/=10;
            n++;
        }
        long long p=1;
        for (int i=1;i<n;i++){
            p*=10;
        }
        cout<<m-p<<endl;
    }
    return 0;
}