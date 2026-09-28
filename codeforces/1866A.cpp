#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    int zeroFound=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        a[i]=abs(a[i]);
        if (a[i]==0){
            zeroFound=1;
        }
    }
    if (zeroFound==1){
        cout<<"0\n";
    }else{
        int smallest=100000,count=0;
        for (int j=0;j<n;j++){
            if (a[j]<smallest){
                smallest=a[j];
            }
        }
        while(smallest>0){
            count++;
            smallest--;
        }
        cout<<count<<endl;
    }
    return 0;
}