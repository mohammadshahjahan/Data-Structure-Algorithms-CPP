#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
bool prcd(char a, char b)
{
    if (a == '(' || b=='(')
        return false;
    else if (b == ')')
        return true;
    else
    {

        if (a == '^' || a == '*' || a == '/' || a == '%')
        {
            if (b == '^')
                return false;
            else
                return true;
        }
        else
        {
            if (b == '+' || b == '-')
                return true;
            else
                return false;
        }
    }
}
void InfixToPreFix(vector<char>s)
{
    int i = 0, p = 0;
    stack<char> st;
    vector<char> Prefix;
    while (s[i] != '\0')
    {
        char symb = s[i];
        i++;
        if (!(symb == '+' || symb == '-' || symb == '*' || symb == '/' || symb == '%' || symb == '^' || symb == '(' || symb == ')'))
        {
            Prefix.push_back(symb);
            p++;
        }
        else
        {
            while (!st.empty() && !prcd(symb,st.top()))
            {
                char x = st.top();
                Prefix.push_back(x);
                p++;
                st.pop();
            }
            if (symb == ')' && st.top() == '(')
            {
                st.pop();
            }
            else
                st.push(symb);
        }
    }
    while (!st.empty())
    {
        char x = st.top();
        Prefix.push_back(x);
        p++;
        st.pop();
    }
    reverse(Prefix.begin(),Prefix.end());
    for (int i = 0; i < Prefix.size(); i++)
    {
        cout << Prefix[i] <<" ";
    }
}
int main()
{
    int n;cin>>n;
    vector<char>s;
    for (int i=0;i<n;i++){
        char c;cin>>c;s.push_back(c);
    }
    reverse(s.begin(),s.end());
    InfixToPreFix(s);
    return 0;
}