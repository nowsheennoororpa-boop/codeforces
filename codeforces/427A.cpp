#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int untreated=0;
    for(int i=0;i<n;i++){
        int events;
        cin>>events;
        if (events>0){
            sum+=events;
        }else if(sum==0 && events<0){
            untreated++;
        }else if (sum>0 && events<0){
            sum--;
        }
    }
    cout<<untreated<<endl;
    return 0;
}