#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[3];
        int weakCount=0,smallest=10;
        for (int i=0;i<3;i++){
            cin>>a[i];
            if (a[i]<smallest){
                smallest=a[i];
            }
        }
        weakCount=n-smallest;
        cout<<weakCount<<endl;
    }
    return 0;
}