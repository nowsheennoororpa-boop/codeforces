#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        bool poss=false;
        for (int i=1;s[i]!='\0';i++){
            if (s[i-1]!=s[i]){
                poss=true;
                break;
            }else{
                poss=false;
            }
        }
        if (poss==true){
            cout<<"YES\n";
            string r=s;
            random_device rd;
            mt19937 g(rd());
            do {
                shuffle(r.begin(), r.end(), g);
            }while (r==s);
            cout<<r<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}