// Infix to Postfix

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int operatorPrecedence(char symbol){
    if (symbol=='^'){
        return 3;
    }
    else if (symbol=='*' || symbol=='/'){
        return 2;
    }
    else if (symbol=='+' || symbol=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
int main()
{
    stack<char> s;
    vector<char> v;

    string data = "(2+3)+{6*8}";

    s.push('(');
    data = data + ')';
    cout << data << endl;

    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == '(' || data[i] == '{' || data[i] == '[')
        {
            s.push(data[i]);
        }
        
        else if (data[i] == ')' || data[i] == '}' || data[i] == ']')
        {
            while (s.top() != '(' && s.top() != '{' && s.top() != '[')
            {
                v.push_back(s.top());
                s.pop();
            }
            s.pop();
        }

        else if (data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/' || data[i] == '^')
        {
            s.push(data[i]);
        }
        else
        {
            v.push_back(data[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout<<endl;
}