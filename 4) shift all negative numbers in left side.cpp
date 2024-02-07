#include<iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int size) {
    int j = 0; 
    // j-> memory block hai jha pr main negative number store kr skta hu
     
     for(int i = 0; i<size; i++) {
        // ye i for loop ka pure array ko traverse krega aur jha bhi mujhe arr[i]<0 milega ye usko j se swap kra ke j ko aage
        // bada dega

        if(arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
     }

     //printing 
     for(int i=0; i<size; i++) {
        cout<<arr[i]<<"  ";
     }
}

int main() {

    int arr[ ] = {23,-7,12,-10,11,-40,60};
    int size = 7;


   shiftNegativeOneSide(arr,size);
 
    return 0; 
}