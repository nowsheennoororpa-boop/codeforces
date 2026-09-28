#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        if (x+1<=67 && x+1>=-67){
            cout<<x+1<<endl;
        }else{
            cout<<x<<endl;
        }
    }
    return 0;
}