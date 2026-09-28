#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        string c;
        cin>>b;
        cin>>c;
        for (int i=0;c[i]!='\0';i++){
            if (c[i]=='D'){
                a.push_back(b[i]);
            }else{
                a.insert(0,1,b[i]);
            }
        }
        cout<<a<<endl;
    }
    return 0;
}