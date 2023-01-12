#include<iostream>
using namespace std;
int main(){
    char a[10];
    gets(a);
    int m=0;
    while(a[m]!='\0'){
        m++;
    }
    m--;
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<a[m-j];
        }
        cout<<endl;
    }
    return 0;
}
