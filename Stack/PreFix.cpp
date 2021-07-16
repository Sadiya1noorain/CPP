#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

template<class T>
T preFix(string s)
{
    stack<T> st;

    for (int i = s.length() - 1; i >= 0 ; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }

        else
        {
            T op1 = st.top();
            st.pop();
            T op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+' : st.push(op1 + op2);
                break;
            case '-' : st.push(op1 - op2);
                break;
            case '*' : st.push(op1 * op2);
                break;
            case '/' : st.push(op1 / op2);
                break;
            case '%' : st.push(op1 % op2);
                break;
            case '^' : st.push(pow(op1, op2));
                break;
            
            default: cout<<"Invalid Operator \n";
                break;
            }
        }    
    }
    return st.top();
}

int main()
{
    string s;

    cout<<"Enter the arithmetic Expression : ";
    cin>>s;
    int ans;
    ans = preFix<int>(s);

    cout<<"Value of entered expression = "<<ans<<endl;
    
}