#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        int min=1000;
        for (int i=0;x!=0;i++){
            if (x%10<min){
                min=x%10;
            }
            x/=10;
        }
        cout<<min<<endl;
    }
    return 0;
}