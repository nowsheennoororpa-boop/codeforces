#include <iostream>
using namespace std;

int main(){
    int n;
    long long x;
    cin>>n>>x;
    long long remain=x;
    long long distressed=0;
    while (n--){
        char c;
        int d;
        cin>>c>>d;
        if (c=='-' && d<=remain){
            remain-=d;
        }else if (c=='-' && d>remain){
            distressed++;
        }else if (c=='+'){
            remain+=d;
        }
    }
    cout<<remain<<" "<<distressed;
    return 0;
}