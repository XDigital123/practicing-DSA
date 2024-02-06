#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int size) {
    int minNum = INT_MAX; 
    for(int i=0; i<size; i++) {
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}



int main(){ 
    int arr[] = {10,20,60,223,2,60,1};
    int size = 7; 
    int minimum = findMin(arr,size);
    cout<<"Minimum number is : "<<minimum<<endl;
    return 0; 
}