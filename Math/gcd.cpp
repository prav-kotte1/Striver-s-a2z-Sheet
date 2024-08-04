//gcd or hcf greatest common divisor/highest common factor
//brute-force
#include<iostream>
using namespace std;

int gcdf(int n1, int n2){
    for(int i = min(n1, n2); i> 0; i--){
        if (n1%i ==0 && n2%i ==0){
            return i;
        }
    }
    return 1;
};

int main(){
    int n1;
    int n2;
    cout << "Enter n1 & n2:" << endl;
    cin >> n1 >> n2;
    cout << gcdf(n1, n2) << endl;
}

//efficient
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
//eucledian algorithm
int main() {
    int n1, n2;
    cout << "Enter n1 & n2:" << endl;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;
    return 0;
}
