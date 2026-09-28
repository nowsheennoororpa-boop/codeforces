#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        for (int i=2;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"1";
        cout<<"\n";
    }
    return 0;
}