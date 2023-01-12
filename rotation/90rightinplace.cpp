#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp = a[i][j]  ;
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        int l=0,h=n-1;
        while(l<=h){
            int temp = a[i][l];
            a[i][l]=a[i][h];
            a[i][h]=temp; l++;h--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}