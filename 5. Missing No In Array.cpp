#include <iostream>
using namespace std;

void missingNo(int arr[], int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int check=0;

    while(s<=e){
        if (arr[mid]-mid>1){
            e=mid-1;

        }
        else{
            s=mid+1;
            check=1;
        }
        mid=s+(e-s)/2;

    }
    cout<<mid+1+check<<endl;

}
int main(){

        int arr[13]={1,2,3,4,5,6,8,10,11,13,15,17};
        int size=13;
        missingNo(arr,5);

}