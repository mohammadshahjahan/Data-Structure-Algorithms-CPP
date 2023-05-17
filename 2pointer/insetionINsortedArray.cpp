#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9,11,13,14,0};
    int n;cin>>n;
    int diff1 = abs(arr[0]-n);
    int diff2 = abs(arr[7]-n);
    if(diff1<diff2){
            int i=0;

    for(;i<8;i++){
        if(arr[i]>n){
            break;
        }
    }
    int j=7;
    while(j>=i){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=n;
    for(int i=0;i<9;i++)cout<<arr[i]<<" ";


    }
else{
    int i=7;

    for(;i>=0;i--){
        if(arr[i]<n){
            break;
        }
    }
    int j=7;
    while(j>i){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=n;
    for(int i=0;i<9;i++)cout<<arr[i]<<" ";
}


    return 0;
}