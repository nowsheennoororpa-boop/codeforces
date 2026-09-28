#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int y[n];
    for (int i=0;i<n;i++){
        cin>>y[i];
    }
    int count=0;
    for (int i=0;i<n;i++){
        if (5-y[i]>=k){
            count++;
        }
    }
    float ans=count/3;
    cout<<ceil(ans)<<endl;
    return 0;
}