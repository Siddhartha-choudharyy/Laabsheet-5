#include<iostream>
using namespace std;
main(){
    int arr[]={12,34,56,78,91,98};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;

    cout <<"Enter the target number to search:";
    cin>>target;
    bool found=false;
    for(int i=1; i<n; i++){
        if(arr[i]==target){
            found=true;
            cout<<"Target number found at index:"<<i<<endl;
            break;
        }
    }
    if(!found){
        cout<<"Target number not found in the array:"<<endl;
    }
    return 0;
}



