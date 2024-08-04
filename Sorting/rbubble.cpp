#include <bits/stdc++.h> 
using namespace std; 

void bubbleSort(int arr[], int n) 
{ 
	if (n == 1) 
		return; 
	int count = 0; 
	for (int i=0; i<n-1; i++) 
		if (arr[i] > arr[i+1]){ 
			swap(arr[i], arr[i+1]); 
			count++; 
		} 
	if (count==0) 
		return; 

	bubbleSort(arr, n-1); 
} 

void printArray(int arr[], int n) 
{ 
	for (int i=0; i < n; i++) 
		cout<<arr[i]<<" "; 
	cout<<"\n"; 
} 

int main() 
{ 
	int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n); 
	cout<<"Sorted array : \n"; 
	printArray(arr, n); 
	return 0; 
} 