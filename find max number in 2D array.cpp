#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3],int row , int col) {
    int maximum = INT_MIN;
    for(int i=0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            if(arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }
    return maximum; 
}


int main() {
    int arr[3][3] = {
        {10,20,30},
        {40,68,21},
        {61,99,361},
    };
    int row = 3; 
    int col = 3;
    int maxNumber = findMax(arr,row,col);
    cout<<"Maximum number is : "<<maxNumber<<endl;
    return 0; 

}