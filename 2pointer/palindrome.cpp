#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    int f=1;
    while(i<j){
        if(s[i]!=s[j]){
            f=0;break;
        }
        i++;j--;
    }
    if(f)cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}