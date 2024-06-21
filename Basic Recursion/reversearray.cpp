#include <iostream>
using namespace std;

void reverseArray(int a[], int n){
    int b[n];
    for(int i = 0 ; i < n ; i++){
        b[i] = a[n - 1 - i];
    }
    for(int i = 0 ; i < n ; i++){
        cout << b[i] << " ";
    }
    cout << endl; // For better output formatting
}

void printArray(int a[], int n){
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl; // For better output formatting
}

int main() {
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    
    int a[n]; // Declaration moved after n is known

    cout << "Enter the elements of the array:" << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    cout << "Given array:" << endl;
    printArray(a, n);
    
    cout << "Reversed array:" << endl;
    reverseArray(a, n);

    return 0;
}
