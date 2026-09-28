#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> digits;
        int count=1, number=0;
        while(n>0){
            if (n%10>0){
                digits.push_back((n%10)*count);
            }
            n=n/10;
            count*=10;
            number++;
        }
        cout<<digits.size()<<endl;
        for (auto number:digits){
            cout<<number<<" ";
        }
        cout<<"\n";
    }
    return 0;
}