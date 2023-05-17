#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    while(i<j){
        char c = s[i];
        s[i]=s[j];
        s[j]=c;
        i++;j--;
    }
    cout<<s<<endl;
    return 0;
}