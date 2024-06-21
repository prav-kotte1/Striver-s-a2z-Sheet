#include <iostream>
using namespace std;

int solve(int n){
    int product = 1;
    for(int i = 1 ; i <= n ; i++){
        product *= i;
    }
    cout << product;
};

int main() {
    int n;
    cout << "enter n:" <<endl;
    cin >> n;
    solve(n);

    return 0;
}