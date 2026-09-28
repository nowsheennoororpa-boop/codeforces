#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,m,ans=0;
        cin>>n>>m;
        if (n==1){
            ans=0;
        }else if (n==2){
            ans=m;
        }else if (n==m){
            ans=m*2;
        }else{
            ans=m*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}