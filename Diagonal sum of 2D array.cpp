#include<iostream>
using namespace std;

void  rowWiseSum(int arr[][4], int row, int col) {
    
    int sum = 0; 
   for(int i=0; i<row; i++) {
    sum = sum + arr[i][i];
   }
    cout<<"Diagonal sum of 2D array is : "<<sum<<endl;
}


int main() {
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {4,5,6,1},
        {5,3,7,1},
    };
    int row = 4; 
    int col = 4; 
    rowWiseSum(arr,row,col);
    return 0; 
}