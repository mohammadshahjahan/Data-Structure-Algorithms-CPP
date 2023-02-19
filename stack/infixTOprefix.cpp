// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int prcd(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
vector<char>inf(string s,int n){
    stack<char>st;
    int i=0;
    vector<char>a;
    while(i<n){
        char c = s[i];
        i++;
        if(!(c=='^'||c=='%'||c=='*'||c=='/'||c=='-'||c=='+'||c=='('||c==')')){
            a.push_back(c);
        }
        else if(c==')'){
            st.push(')');
        }
        else if(c=='('){
            while(st.top()!=')'){
                a.push_back(st.top());st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty()&&(prcd(c)<=prcd(st.top()))){
                a.push_back(st.top());st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
                a.push_back(st.top());st.pop();
            }
            return a;
    
}
int main() {
    int n;cin>>n;
    string s;cin>>s;
    reverse(s.begin(),s.end());
    vector<char>ans = inf(s,n);
    for(int i=ans.size()-1;i>=0;i--)cout<<ans[i];
    return 0;
}