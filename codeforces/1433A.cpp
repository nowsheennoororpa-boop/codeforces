#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int x;
        cin>>x;
        int count=0;
        for (int p=1;p<=9;p++){
            int j=0;
            for (int k=0;k<4;k++){
                j=j*10+p;
                count++;
                if (x==j){
                    cout<<count<<endl;
                }
            }
        }
    }
    return 0;
}