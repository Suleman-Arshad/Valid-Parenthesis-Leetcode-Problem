#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    cout << "Enter Parenthesis\n";
    cin >> s;
    stack<char> st;
    char c;
    bool check = false;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        c = s[i];
        if (c == '(' || c == '[' || c == '{')
        {
            /* code */
            st.push(c);
        }
        else
        {
            char top = st.top();
            if (!st.empty())
            {
                if (c == '}' && top == '{' || c == ')' && top == '(' || c == ']' && top == '[')
                {
                    st.pop();
                }
            }
            else
            {
                cout << "Stack is empty\n";
            }
        }
    }
    if (st.empty())
    {
        /* code */
        cout << "Valid Paranthesis\n";
    }
    else
    {
        /* code */
        cout << "Invalid Paranthesis\n";
    }

    system("pause");
    return 0;
}