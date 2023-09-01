#include <iostream>
using namespace std;

int main()
{
    char stk[100];
    string data;
    cout << "Enter String: ";
    cin >> data; // It won't take space inside this --- use getline instead
    cout << data[2]<<endl;
    int string_length = data.size();

    cout << string_length << endl;
    for (int i = 0; i < string_length; i++)
    {
        stk[i] = data[i];
    }
    cout<<endl;
    for (int i = string_length; i >= 0; i--)
    {
        cout << stk[i];
    }
    cout << endl;
}