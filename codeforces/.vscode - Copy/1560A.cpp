#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int k;
        cin>>k;
        int likedInt=1;
        for (int j=0; ;j++){
            if (j%3!=0 ||j%10!=3){
                likedInt++;
            }
            if (j==k){
                cout<<likedInt<<endl;
                break;
            }
        }
    }
    return 0;
}