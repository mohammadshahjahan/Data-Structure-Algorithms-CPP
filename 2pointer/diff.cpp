#include <iostream>
using namespace std;
int main(){
    int arr1[]= {1,2,3,4,5};
    int arr2[]= {3,4,5,6,7};
    int arr3[10]={0};
    int i=0,j=0,k=0;
    while(i<5 && j<5){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;k++;
        }
        else{
            if(arr1[i]==arr2[j]){
           
            i++;j++;
        }
           else {
            j++;}
        }
    }
    while(i<5){
        arr3[k]=arr1[i];
            i++;k++;
    }

    for(int i=0;i<k;i++)cout<<arr3[i]<<" ";
    return 0;
}