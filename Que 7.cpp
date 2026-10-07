#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number(Enter number -1 to exit):";

    while(true){
        cin>>num;
        if(num==-1){
            break;
        }
       if(num<0){
        continue;
       }
       cout<<"Processing positive number:"<< num <<endl;
    }
    return 0;
}