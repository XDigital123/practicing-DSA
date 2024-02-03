#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3],int row , int col) {
    int minimum = INT_MAX;
    for(int i=0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            if(arr[i][j] < minimum) {
                minimum = arr[i][j];
            }
        }
    }
    return minimum; 
}


int main() {
    int arr[3][3] = {
        {10,20,30},
        {40,1,21},
        {61,99,361},
    };
    int row = 3; 
    int col = 3;
    int minNumber = findMax(arr,row,col);
    cout<<"Minimum number is : "<<minNumber<<endl;
    return 0; 

}