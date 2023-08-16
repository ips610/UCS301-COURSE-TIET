#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;
    int row;
    int col;

    cout << "Enter No Of Rows of Arr: " << endl;
    cin >> row;
    col = row;

    int no;
    for (int i=0; i<row; i++){
        cin >> no;
        arr.push_back(no);
    }

    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            if (i==j){
                cout<<arr[i]<<" ";
            }
            else{
                cout << "0 ";
            }
        }
        cout<<endl;
    }


}