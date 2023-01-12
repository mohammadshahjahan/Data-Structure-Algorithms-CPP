#include <iostream>
using namespace std;
int main(){
    /*int arr[3];
    for(int i = 0;i<3;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a[3]={5,6,7};
    for(int i = 0;i<3;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int ar[100]={5,6,7};
    for(int i = 0;i<100;i++){
       cout<<ar[i]<<" ";
    }
    cout<<endl;
    int sum =0;
    for(int i=0;i<3;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    int max = INT16_MIN;//-333
    for(int i=0;i<3;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min = INT16_MAX;//99
    for(int i=0;i<3;i++){//j-1,j,j--
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    int n;cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int j = n-1;
    for(int i=0;i<n/2;i++){
        int temp = b[j];
        b[j]=b[i];
        b[i]= temp;
        j--;
    }
    for(int i =0;i<n;i++){
        cout<<b[i]<<" ";
    }*/
    int a[10];
    for(int i=0;i<9;i++){
        cin>>a[i];
    }
    int j =9,loc,x; cin>>loc>>x;
    for(int j=9;j>loc;j--){
        a[j]= a[j-1];
    }
    a[loc]=x;
    for(int i =0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return  0;
}
/*
complexity :- less time less space (run time , Ram Space) 
constant time = Theta1
constantt space  = theata1
time complexity can improve at the cost of space and vicaversa,,,,TIME SPACE Tradeoff
*/