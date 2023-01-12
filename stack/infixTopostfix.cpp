#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool prcd(char a, char b){
    if (a == '(')
        return false;
    else if (b == '(')
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
void InfixToPostFix(string s)
{
    int i = 0, p = 0;
    stack<char> st;
    vector<char> PostFix;
    while (s[i] != '\0')
    {
        char symb = s[i];
        i++;
        if (!(symb == '+' || symb == '-' || symb == '*' || symb == '/' || symb == '%' || symb == '^' || symb == '(' || symb == ')'))
        {
            PostFix.push_back(symb);
            p++;
        }
        else
        {
            while (!st.empty() && prcd(st.top(), symb))
            {
                char x = st.top();
                PostFix.push_back(x);
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
        PostFix.push_back(x);
        p++;
        st.pop();
    }
    for (int i = 0; i < PostFix.size(); i++)
    {
        cout << PostFix[i];
    }
}
int main()
{
    string s;
    cin >> s;

    vector<char> c;
    InfixToPostFix(s);
    return 0;
}