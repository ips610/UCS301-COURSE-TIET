#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[5] = {2, 1, 5, 9, 0};
    bool flag=true;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag=false;
            }
        }
        if (flag){
            break;
        }
        flag=true;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}