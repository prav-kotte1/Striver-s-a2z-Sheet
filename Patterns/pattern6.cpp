// pattern: 
// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i <  n; i++){
        for(int j = n; j > i; j--){
            cout << n-j+1 ;
        }
        cout << endl;
    }

    return 0;
}