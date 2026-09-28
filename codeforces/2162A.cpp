#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        int max=0,total=0,count=0,avg=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]>=max){
                max=a[i];
            }
        }
        for (int i=0;i<n;i++){
            if (a[i]>=max){
                total+=a[i];
                count++;
            }
        }
        avg=total/count;
        cout<<avg<<endl;
    }
    return 0;
}