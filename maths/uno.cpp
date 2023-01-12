#include <iostream>
using namespace std;
int uno(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum= sum^arr[i];
    }
    return sum;
}
int main(){
 int arr[5]={1,2,3,2,1};
  cout<<uno(arr,5);
    return 0;
}