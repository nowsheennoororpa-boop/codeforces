#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        bool possible=true;
        if (a%2==0 && b%2==0){
            possible=true;
        }else if (a%2==0 && a>0 && b%2!=0){
            possible=false;
        }else if (a==0 && b%2!=0){
            possible=false;
        }else if (a%2!=0 && b%2==0){
            possible=false;
        }else if (a%2!=0 && b%2!=0){
            possible=false;
        }
        if (possible==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}