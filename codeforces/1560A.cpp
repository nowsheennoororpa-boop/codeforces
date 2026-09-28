#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> a(2000);
    int count=0;
    for (int i=1;i<2000;i++){
        if (i%3!=0 && i%10!=3){
            a[count]=i;
            count++;
        }
    }
    while (t--){
        int k;
        cin>>k;
        cout<<a[k-1]<<endl;
    }
    return 0;
}