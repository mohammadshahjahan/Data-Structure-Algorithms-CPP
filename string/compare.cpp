#include <iostream>
using namespace std;
int main(){
    char s[100];char t[100];int flag =1;
    gets(s);gets(t);
    int i=0,j=0,m=0,g=0;
    while(s[m]!='\0') m++;
    while(t[g]!='\0') g++;
    if(m!=g) cout<<"Not Same"<<endl;
    else{
    while(s[i]!='\0'&&t[j]!='\0')
    {
        if(s[i]!=t[j]){
            flag =0;break;
        }
        i++;j++;
    }
    if(flag==1){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    }
    return 0;
}