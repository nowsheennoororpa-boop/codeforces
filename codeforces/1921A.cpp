#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        int maxX=-1000,minX=1000;
        for (int i=0;i<4;i++){
            cin>>x>>y;
            if (x>maxX){
                maxX=x;
            }else if (x<minX){
                minX=x;
            }
        }
        cout<<(maxX-minX)*(maxX-minX)<<endl;
    }
    return 0;
}