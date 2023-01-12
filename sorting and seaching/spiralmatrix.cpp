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
    int row_start = 0;int col_end=n-1;int row_end=n-1;int col_start = 0;
    while(row_start<=row_end || col_end<=col_start){
        for(int i=col_start;i<=col_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;
        for(int j=row_start;j<=row_end;j++){
            cout<<a[j][col_end]<<" ";
        }
        col_end--;
        for(int i=col_end;i>=col_start;i--){
            cout<<a[row_end][i]<<" ";
        }
        row_end--;
        for(int j=row_end;j>=row_start;j--){
            cout<<a[j][row_start]<<" ";
        }
        row_start++;
    }
    return 0;
}