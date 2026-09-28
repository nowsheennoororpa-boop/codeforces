#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        int countA=0,countB=0,countC=0,countD=0,countE=0,countF=0,countG=0,final=0;
        for (int i=0;a[i]!='\0';i++){
            if (a[i]=='A'){
                countA++;
            }else if (a[i]=='B'){
                countB++;
            }else if (a[i]=='C'){
                countC++;
            }else if (a[i]=='D'){
                countD++;
            }else if (a[i]=='E'){
                countE++;
            }else if (a[i]=='F'){
                countF++;
            }else if (a[i]=='G'){
                countG++;
            }
        }
        if (countA<m){
            final+=m-countA;
        }if (countB<m){
            final+=m-countB;
        }if (countC<m){
            final+=m-countC;
        }if (countD<m){
            final+=m-countD;
        }if (countE<m){
            final+=m-countE;
        }if (countF<m){
            final+=m-countF;
        }if (countG<m){
            final+=m-countG;
        }
        cout<<final<<endl;
    }
    return 0;
}