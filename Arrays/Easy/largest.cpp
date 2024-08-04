#include<iostream>
using namespace std;

int large(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main(){
    int arr1[] = {2,5,1,3,0};
    int n = 5;
    int max = large(arr1, n);
    cout << "The largest element in the array is: " << max << endl;
}