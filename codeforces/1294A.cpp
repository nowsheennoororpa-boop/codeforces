#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        n-=(2*c-b-a);
        if (n<0||n%3!=0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}