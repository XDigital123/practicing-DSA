#include<iostream>
using namespace std;


int findMissingNumber(int arr[], int size) {
   int sum = 0; 
   for(int i=0; i<size; i++) {
    sum = sum + arr[i];
   }
  
   int totalSum = ((size + 1) * (size + 2))/2;
   int missingNumber = totalSum - sum;

   return missingNumber;
}

int main() {
  int arr[] = {1,2,3,5,6,7,8,9};
  int size = 8;
  int ans = findMissingNumber(arr,size);

  cout<<"Missing number is : "<<ans<<endl;
  return 0;

}