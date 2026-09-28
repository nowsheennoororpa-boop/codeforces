#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        int min=10, answer=1;
        bool changed=false;
        for (int j=0;j<n;j++){
            cin>>a[j];
            if (a[j]<min){
                min=a[j];
            }
        }
        for (int j=0;j<n;j++){
            if (a[j]==min && !changed){
                answer*=(min+1);
                changed=true;
            }else{
                answer*=a[j];
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}