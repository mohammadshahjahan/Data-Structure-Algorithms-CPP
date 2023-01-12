#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>> a>>b;
    if((a==0)&&(b==0)){
        cout<<"Origin";
    }
    else if((a!=0)&&(b==0)){
        cout<<"X-axis";
    }
    else if((a==0)&&(b!=0)){
        cout<<"Y-axis";
    }
    else if((a>0)&&(b>0)){
        cout<<"1st quad";
    }
    else if((a>0)&&(b<0)){
        cout<<"4th quad";
    }
    else if((a<0)&&(b>0)){
        cout<<"2nd quad";
    }
    else {
        cout<<"3rd quad";
    }
    return 0;
}