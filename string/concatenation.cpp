#include<iostream>
using namespace std;
int main(){
    char a[10];
    char b[10];
    gets(a);gets(b);
    int i=0,j=0;
    while(a[i]!='\0'){
        i++;
    }
    while (b[j]!=0)
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    int k=0;
    while(a[k]!='\0'){
        cout<<a[k];
        k++;
    }
    return 0;
}