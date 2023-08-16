#include<iostream>

using namespace std;

int main(){

    int sparseMatrix[4][5] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };

    int size = 0;

    for (int i = 0; i<4; i++){
        for (int j = 0; j<5; j++){
            size+=1;
        }
    }

    int compactMatrix[size+1][3];

    compactMatrix[0][0]=4;
    compactMatrix[0][1]=5;
    compactMatrix[0][2]=size;

}