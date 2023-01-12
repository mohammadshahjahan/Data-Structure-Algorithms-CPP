#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;int flag =1;
    if((s[i]>='a'&&s[i]<='z' )|| (s[i]>='A'&&s[i]<='Z' )||(s[i]=='_') ){
        i=1;
        
        while(s[i]!='\0'){
            if((s[i]>='a'&&s[i]<='z' )|| (s[i]>='A'&&s[i]<='Z' )||(s[i]=='_')||(s[i]=='$'||(s[i]>='0'&&s[i]<='9'))){
                i++;
            }
            else{
                flag =0; break;
            }
        }
    }
    else flag =0;
    if(i>32){
        flag=0;
    }
    if(flag==1){
        cout<<"VALID"<<endl;
    }
    else  cout<<"INVALID"<<endl;
    return 0;
}