#include <iostream>
using namespace std;
int main(){
    int day,month,year;
    cin>>day>>month>>year;
    int leap =0;
    for(int i=4;i<year;i++){
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)){
            leap++;
        }
    }
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int mnd = 0;
    for(int i = 0;i<month-1;i++){
        mnd = mnd+a[i];
    }
    mnd = mnd+day;
    int x ;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        x=1;
    }
    else { x=0;}
    int totaldays= (year-1)*365 + leap + mnd + x;
    int n= mnd%7;
    if(n==1){
        cout<<"MONday";
    }
    else if(n==2){
        cout<<"tuesday";
    }
    else if(n==3){
        cout<<"wednesay";
    }
    else if(n==4){
        cout<<"thrusday";
    }
    else if(n==5){
        cout<<"friday";
    }
    else if(n==6){
        cout<<"saturday";
    }
    else if(n==0){
        cout<<"sunday";
    }
    return 0;
}