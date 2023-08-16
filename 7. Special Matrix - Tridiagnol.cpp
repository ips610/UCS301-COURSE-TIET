#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int row;
    int col;

    cout << "Enter No Of Rows of Arr: " << endl;
    cin >> row;
    col = row;

    int no;
    for (int i = 0; i < 3 * row - 2; i++)
    {
        cin >> no;
        arr.push_back(no);
    }
    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i - j == -1 || i - j == 0 || i - j == 1)
            {
                cout<<arr[k]<<" ";
                k++;
            }
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}