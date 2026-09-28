#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        cout<<pow(min(max(2*a,b),max(a,2*b)),2)<<endl;
    }
    return 0;
}