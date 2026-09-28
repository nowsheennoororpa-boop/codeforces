#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(abs(a-b),a+c-b)<<endl;
        /*int ans=(a+c)-b;  
        if (ans==0){
            ans=a;
        }
        cout<<ans<<endl;*/
    }
    return 0;
}