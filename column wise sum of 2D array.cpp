#include<iostream>
using namespace std;

void  rowWiseSum(int arr[][4], int row, int col) {
    
    for(int i=0; i<col; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum = sum + arr[j][i];
        }
    cout<<sum<<endl;
    }
    
}


int main() {
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {4,5,6,1},
    };
    int row = 3; 
    int col = 4; 
    rowWiseSum(arr,row,col);
    return 0; 
}