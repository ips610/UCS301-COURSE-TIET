#include<iostream>
using namespace std;

int main(){

    //Unsorted Array

    int arr[6]={1,2,1,3,2,1};
    int size=6;

    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[j]==arr[i]){
                for (int k=j;k<size;k++){
                    arr[k]=arr[k+1];
                }
            size--;
            }
        }
    }   

    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    //Sorted Array

    int arr1[7]={1,1,2,2,3,3,3};
    size=7;

    for (int i=0;i<size;i++){
        int j=i+1;
        while(arr1[j]<=arr1[i]){

            for (int k=j;k<size;k++){
                    arr1[k]=arr1[k+1];
                }
                j++;

        }
        size--;
        // for (int j=i+1;j<size;j++){
        //     if (arr[j]==arr[i]){
        //         for (int k=j;k<size;k++){
        //             arr[k]=arr[k+1];
        //         }
        //     size--;
        //     }
        // }
    }   

    for (int i=0;i<size;i++){
        cout<<arr1[i]<<endl;
    }
}