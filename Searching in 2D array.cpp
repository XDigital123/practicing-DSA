#include<iostream>
using namespace std;

bool findTarget(int arr[][3], int row, int col, int target) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == target) {
                return true;
            }
            }
        }
        return false;

    }


int main() {
    int arr[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90},
    };
    int row = 3; 
    int col = 3; 
    int target = 80;

    int ans = findTarget(arr,row,col,target);
    if(ans==1) {
        cout<<"Target found";
    }
    else {
        cout<<"Not found";
    }
    return 0; 
}