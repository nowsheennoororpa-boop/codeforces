#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        int totalNormal=n*a,totalNew=((n/2)*b)+((n%2)*a);
        cout<<min(totalNormal,totalNew)<<endl;
    }
    return 0;
}