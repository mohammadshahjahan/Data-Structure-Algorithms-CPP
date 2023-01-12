#include <iostream>
using namespace std;
int binary_search(int low,int high,int key,int a[]){
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==key){
            return mid ;
        }
        else
        {
            if(a[mid]>key){
                high= high-1;
            }
            else{
                low=low+1;
            }
        }
        
    }
    return -1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++){
        cin>>a[i];
    }
    int low = 0,high= n-1;
    int key; cin>>key;
    cout<<binary_search(low,high,key,a);
    return 0;
}