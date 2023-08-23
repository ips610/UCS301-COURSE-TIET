#include <iostream>
using namespace std;

int pushElements(int *stk, int size)
{
    int top;
    cout << "Enter no Of Elements: ";
    cin >> top;
    if (top <= size)
    {
        for (int i = 0; i < top; i++)
        {
            cout << "Enter Element: ";
            cin >> stk[i];
        }
    }
    return top - 1;
}

void displayElements(int stk[], int size)
{
    for (int i = size + 1; i > 0; i--)
    {
        cout << stk[i - 1] << endl;
    }
}

int pushSingleElement(int *arr, int top, int size)
{
    if (!isFull(top, size))
    {

        cout << "Enter Element: ";
        cin >> arr[top + 1];
        return ++top;

    }
    else{

        cout<<"Stack is Full -- Overflow"<<endl;
    }
    return top;
}

bool isNotEmpty(int top)
{
    if (top != -1)
    {
        return true;
    }
    cout<<"Stack Is Empty --Underflow"<<endl;
    return false;
}

bool isFull(int top, int size)
{
    if (top >= size)
    {
        return true;
    }
    return false;
}

int popElement(int *arr, int top)
{
    if (isNotEmpty(top))
    {
        cout << "Popped Element: " << arr[top];
        arr[top] = 0;
        return --top;
    }
    else
    {
        cout << "Stack Is Empty: ";
    }
    return top;
}

int peakStack(int arr[], int top)
{
    return arr[top];
}
int main()
{
    int stk[10];
    int size_of_stk = 10;
    int top = -1;

    top = pushElements(stk, size_of_stk);
    displayElements(stk, top);
    top = pushSingleElement(stk, top, size_of_stk);
    displayElements(stk, top);
    top = popElement(stk, top);
    cout << endl;
    displayElements(stk, top);
    cout << "Top Element Is: " << peakStack(stk, top) << endl;
    cout << isFull(top, size_of_stk) << endl;
}