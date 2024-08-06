#include<iostream>
using namespace std;

bool sorted(int a[], int n){
    for (int i = 1 ; i < n ; i++){
        if(a[i] < a [i - 1])
            return false;
    }
    return true;
};


int main(){
    int arr1[] = {1, 6, 3, 4, 4, 5}, n = 6 ;

    if(sorted(arr1, 6)){
        cout << "it is a sorted array." << endl;
    }
    else{
        cout << "it is not a sorted array." << endl;
    };

    return 0;
}


