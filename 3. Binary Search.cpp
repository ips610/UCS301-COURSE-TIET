#include <iostream>
using namespace std;

void binarySearch(int arr[], int size,int element)
{
    int s = 0, e = size-1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (element == mid)
        {
            cout << "Element Found" << endl;
            break;
        }

        else if (element < mid)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            mid = s + (e - s) / 2;
        }

        mid = s + (e - s) / 2;
    }
    if (s > e)
    {
        cout << "Element Not Found" << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int element = 7;
    binarySearch(arr,5,element);
    
}