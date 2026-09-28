#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    /*int max=0,min=101;
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }else if (a[i]<min){
            min=a[i];
        }
    }*/
    int count=0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (a[j]<a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
        }
    }
    for (int i=n-1;i<0;i++){
        for (int j=n-i-1;j<0;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}