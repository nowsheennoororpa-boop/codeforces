#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        string ans;
        for (int k=0;k<8;k++){
            string word;
            cin>>word;
            for (int j=0;j<8;j++){
                if (word[j]!='.'){
                    ans+=word[j];
                }
                
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}