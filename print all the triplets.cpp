#include<iostream>
using namespace std;
//print all the triplets 
int main(){ 
    int arr[]= {11,2,3,4};
    int size = 4; 

    for(int i=0; i<size ; i++) {
        for(int j=0; j<size; j++) {
            for(int k=0; k<size; k++) {
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
            }
        }
    }
    return 0; 
}