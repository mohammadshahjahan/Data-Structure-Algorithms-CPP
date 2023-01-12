#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector <int>:: iterator it;
    for ( it = v1.begin(); it != v1.end(); it++)
    {
        /* code */
        cout<<*it<<endl;
    }
    
    for(auto element : v1){
        cout<<element<<endl;
    }
    v1.pop_back();
    vector<int> v2(3,50);
    swap(v1,v2);
    for(auto element : v1){
        cout<<element<<endl;
    }
    for(it=v2.begin();it!=v2.end();it++){
        cout<<*it<<endl;
    }
    sort(v1.begin(),v1.end());
    pair<int,char> p;
    p.first=3;
    p.second= 'A';
  return 0;
}