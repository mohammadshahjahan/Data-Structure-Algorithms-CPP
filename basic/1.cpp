#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int small = INT16_MAX;
    int big= INT16_MIN;
    if(n==1){
        small= a[n-1];
        big = a[n-1];
    }
    else
    {
    for (int i = 0; i < n; i++)
    {
        /* code */

        if (a[i]> big){
            big = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
    }
    printf("%d %d",small,big);
    return 0;
}