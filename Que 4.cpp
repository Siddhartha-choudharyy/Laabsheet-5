#include<iostream>
using namespace std;
int main(){

    for(int i=0; i<20; i++){
        if(i % 2 != 0){
            continue;
        }
        if(i % 4 ==0){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}