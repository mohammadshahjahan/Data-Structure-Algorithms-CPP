#include<iostream>
#include <random>
#include <bits/stdc++.h>
using namespace std;
// int ran(int x,int y){
//  srand(time(0));
//   int r = y - x + rand() % x ;
//   return r;
// }
int partition(int a[],int low,int high) {
    int mid = (low+high)/2;
    int m = a[low];     //to make a partiation in sorted array
    a[low]=a[mid];
    a[mid]=m;
    int i=low;
    int j= high+1;
    int pivot = a[low];
    int t;
    do
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j){
            int c= a[i];
            a[i]=a[j];
            a[j]=c;
        }
        
    } while (i<j);
    t= a[j];
    a[j]=a[low];
    a[low]=t;
    return j;
    
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int j;
        j= partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
int main(){
    int a[11]={20,30,40,10,55,35,80,45,15,5};
    int b[11]={1,2,3,4,5,6,7,8,9,10};
    b[10]= INT16_MAX;
    a[10]=INT16_MAX;
    quicksort(a,0,9);
    quicksort(b,0,9);
    for(int i=0;i<=9;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=9;i++){
        cout<<b[i]<<" ";
    }
    //best case when array elemets are equal
    return 0;
}