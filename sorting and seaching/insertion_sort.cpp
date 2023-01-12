#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    int j;
    for(int i =1;i<n;i++){
        x= arr[i];
        j = i-1;
        while(arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}