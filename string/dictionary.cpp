#include <bits/stdc++.h>
using namespace std;
int main(){
    //using maps to get the string in lexographical order
    map<string,int> m;
    cout<<"TOTAL NO. WORDS"<<endl;
    int n;cin>>n;
    cout<<"\nGIVE ME WORDS TO ARRANGE IT LIKE A DICTIONARY"<<endl;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        m[s];
    }
    cout<<"\nWORDS AFTER ARRANGEMENT IS :- "<<endl;
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<endl;
    }
    
    return 0;
}