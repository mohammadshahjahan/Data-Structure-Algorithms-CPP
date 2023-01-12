/*
    1. Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 1 - Write a function to print the names of all the customers having balance less than $200.
    2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
*/ 
#include<iostream>
using namespace std;
struct accountHolder{
    string name;int accNO; int balance;
};
int main(){
    struct accountHolder a[11];
    for(int i=0;i<=10;i++){
        cin>>a[i].name;cin>>a[i].accNO;cin>>a[i].balance;
    }
    cout<<"Accounts Name of less than $200 in balance "<<endl;
    for(int i=0;i<=10;i++){
        if(a[i].balance<200)cout<<a[i].name<<endl;
    }
    cout<<"Added $100 in the balance of all the customers having more than $1000 in their balance"<<endl;
    for(int i=0;i<=10;i++){
        if(a[i].balance>1000){a[i].balance+=100;
        cout<<a[i].name<<" "<<a[i].balance<<endl;
        }

    }
    return 0;
}
