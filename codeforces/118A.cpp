#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    cin>>s;
    string answerString;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]!='A'&&s[i]!='O'&&s[i]!='Y'&&s[i]!='E'&&s[i]!='U'&&s[i]!='I'&&s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i'){
            answerString+='.';
            if (s[i]>='A' && s[i]<='Z'){
                answerString+=s[i]+32;
            }else{
                answerString+=s[i];
            }
        }
    }
    cout<<answerString<<endl;
    return 0;
}