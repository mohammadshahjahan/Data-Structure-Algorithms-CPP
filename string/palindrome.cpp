#include<iostream>
using namespace std;
int main(){
    char s[7];
    gets(s);
    int flag =1;
    for(int i=0;i<=(7/2);i++){
        if(s[i]!=s[5-i]){
            flag =0;break;
        }
    }
    if(flag==1){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a PAlindrome"<<endl;
    }
    return 0;
}