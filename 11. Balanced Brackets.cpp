#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<char> s;
    string data = "((2+3)+{6+8})";
    int count = 0;

    for (int i = 0;i<data.size();i++){
        if (data[i]=='(' || data[i]=='{' || data[i]=='['){
            s.push(data[i]);
            count++;
        }
        if (data[i]==')' || data[i]=='}' || data[i]==']'){
            if( s.pop()=='(' && data[i]==')' ){
                count--;
            }
        }
    }
    if (count==0){
        cout<<"Balanced Paranthesis"<<endl;
    }
    else{
        cout<<"UnBalanced Paranthesis"<<endl;
    }
}