#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a;
        cin>>a;
        bool possible=false;
        if (a>100 && a<110){
            if (a%10>1){
                possible=true;
            }
        }else if (a>=1010 && a<=1099){
            if (a%100>=1){
                possible=true;
            }
        }
        if (possible==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}