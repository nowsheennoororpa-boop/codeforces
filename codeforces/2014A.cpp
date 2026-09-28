#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int count=0,robin=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]>=k){
                count+=a[i];
            }
            if (a[i]==0 && count>0){
                count--;
                robin++;
            }
        }
        cout<<robin<<endl;
    }
    return 0;
}