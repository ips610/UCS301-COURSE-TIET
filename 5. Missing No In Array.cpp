#include <iostream>
using namespace std;
void missingNo(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if (arr[mid]-mid>1){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    cout<<mid+1<<endl;
}
int main(){
        int arr[10]={1,2,4,6,7,9,10,11,12,13};
        int size=10;
        missingNo(arr,5);
}