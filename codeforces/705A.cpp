#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    string hate={"I hate"};
    string love={"I love"};
    string answer;
    if (n==1){
        cout<<"I hate it"<<endl;
        return 0;
    }
    for (int i=1;i<n;i++){
        answer+=hate;
        answer+={" that "};
        answer+=love;
    }
    answer+={" it"};
    cout<<answer<<endl;
    return 0;
}