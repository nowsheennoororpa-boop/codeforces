#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (n<=10){
            cout<<n<<endl;
        }else{
            int count=0;
            for (int i=1;i<=n;i*=10){
                for (int j=1;j<=9;j++){
                    int x=j*i;
                    if (x<=n){
                        count++;
                    }
                }
                
            }
            cout<<count<<endl;
        }
    }
    return 0;
}