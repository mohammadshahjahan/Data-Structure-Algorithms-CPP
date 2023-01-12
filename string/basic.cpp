#include <iostream>
using namespace std;
int main(){
    char s[20];
    gets(s);
    puts(s);
    int i=0;
    while(s[i]!='\0') i++;
    cout<<i<<endl;
    int j=0;i=i-1;
    while(j<i){
        char b = s[i];
        s[i]=s[j];
        s[j]=b;
        i--;j++;
    }
    puts(s);
    return 0;
}