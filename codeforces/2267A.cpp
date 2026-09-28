#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; 
        char c;
        cin>>n;
        cin>>c;
        string s;
        cin>>s;
        int count=0;
        for (int i=0;i<n/2;i++){
            if (s[i]==s[n-i-1]){
                continue;
            }else if(s[i]==c || s[n-i-1]==c){
                count++;
            }
            else{
                count+=2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}