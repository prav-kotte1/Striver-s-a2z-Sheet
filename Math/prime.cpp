#include<iostream>
using namespace std;

bool prime(int n){
    if(n < 0) return false;
    int k=0;
    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
            k = k+1;
        }
    }
    if(k==2) {
        return true;
    }
    else {
        return false;
    }
};

int main(){
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    if(prime(n)){
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}