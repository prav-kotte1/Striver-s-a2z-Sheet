#include<bits/stdc++.h>
using namespace std;

void sort(int a[],int n){
    int i, j, min;

    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if (a[j] < a[min])
                j = min;
        }

        if(min!=i)
            swap(a[i], a[min]);
    }
}

void print(int a[], int n){
    int i;
    for(i=0; i<n;i++){
        cout << a[i] << " ";
        cout << endl;
    }
}

int main(){
    int a[]= {34, 56, 23, 15, 2};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, n);
    print(a, n);
    return 0;
}