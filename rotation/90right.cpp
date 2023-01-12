#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][n];
    int aa[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>aa[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = aa[j][i];
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