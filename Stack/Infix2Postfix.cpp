#include<iostream>
#include<stack>
using namespace std;

int precedence(char ch)
{
    if(ch == '^')
        return 3;
    else if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else 
        return -1;    
}

string postFix(string s)
{
    stack<int> st;
    string res;
    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            res += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(st.top() != '('){
                res += st.top();
                st.pop();
            }   
            st.pop();  
        }

        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main()
{
    cout<<postFix("a+b*(c^d-e)^(f+g*h)-i")<<endl;
}