#include <iostream>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n,s; cin>>n>>s;
    int arr[n];
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    int leng=0,len=0,sum;
    for(int i =0;i<n;i++){
      sum=0;
      for(int j=i;j<n;j++){
        sum=sum^arr[j];
        if(sum>=s){
          len =j-i+1;
        }
        if(len>0&&leng>0){
          leng=min(leng,len);
        }
        else if(leng==0&&len>0){
          leng=len;
        }
      }
    }
    if(leng==0){
      cout<<"-1"<<endl;
    }
    else
    cout<<leng<<endl;
  }
  return 0;
}