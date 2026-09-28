#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int q;
    cin>>q;
    while (q--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int count1[26],count2[26];
        for (int i=0;i<26;i++){
            count1[i]=0,count2[i]=0;
        }
        for (char &c: s)count1[c-'a']++;
        for (char &c: t)count2[c-'a']++;
        bool possible=true;
        for (int i=0;i<26;i++){
            if (count1[i]!=count2[i]){
                possible=false;
            }
        }
        if (possible==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}