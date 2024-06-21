#include <iostream>
using namespace std;

int solve(int n){
    int sum = 0;
    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    cout << sum;
};

int main() {
    int n;
    cout << "enter n:" <<endl;
    cin >> n;
    solve(n);

    return 0;
}