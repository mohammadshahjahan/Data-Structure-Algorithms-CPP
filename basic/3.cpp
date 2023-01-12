#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int MaxSum = INT16_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        currSum+= a[i];
        if(currSum>MaxSum)
        MaxSum=currSum;
        if(currSum<0)
        currSum=0;
    }
    cout<<MaxSum;
    return 0;
}