#include<iostream>
using namespace std;

int divisor(int n){
    if(n < 0) cout << "negative" << endl;
    for(int i=1 ; i <= n ; i++){
        if(n % i == 0){
            cout << i << " " ;
        }
    }
};

int main(){
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    divisor(n);

    return 0;
}