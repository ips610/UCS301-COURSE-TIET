#include<iostream>
using namespace std;

void create(int arr[], int size){
    
    // for (int i=0;i<size;i++){
    //     cin>>arr[i];
    // }


}
void insert(int arr[],int size,int value,int pos){

    for (int i=size-1;i<=pos-1;i--){
        arr[i+1]=arr[i];
    }
    size++;

}

void del(){

}
void search(){

}
void display(int arr[], int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    // cout<<"Enter";
    // int size;
    // cin>>size;
    // int arr[size];

    // create(arr, size);
    // display(arr, size);

    // insert(arr,size,value,pos);
    // display(arr,size);


    int arr[6]={1,2,3,4,5};
    int size=5;

    //inserting in array

    int value=6, pos=2;
    for (int i=size;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    size++;

    //displaying 

    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    //linear search in array

    value=5;
    int index=-1;
    for (int i=0;i<size;i++){
        if (arr[i]==value){
            index=i;
        }
    
    }
    if (index!=-1){
        cout<<"Element Found At Index: "<<index<<endl;
        
    }
    else{
        cout<<"Element Not Found"<<endl;
    }

    //delete

    pos=3;
    for (int i=pos-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;

    //displaying

    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}