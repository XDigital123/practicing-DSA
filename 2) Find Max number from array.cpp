#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[], int size) {
    int maxNum = INT_MIN; 
    for(int i=0; i<size; i++) {
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}



int main(){ 
    int arr[] = {10,20,60,223,2,60,70};
    int size = 7; 
    int maximum = findMax(arr,size);
    cout<<"Maximum number is : "<<maximum<<endl;
    return 0; 
}