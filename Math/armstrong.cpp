#include <iostream>
#include <cmath> // Include cmath for pow

using namespace std;

bool arm(int s) {
    int n = s;
    int k = to_string(s).length(); // Number of digits
    int sum = 0;

    while (n > 0) {
        int ld = n % 10; // Get last digit
        sum += pow(ld, k); // Add ld^k to sum
        n = n / 10; // Remove last digit
    }
    return sum == s;
}

int main() {
    int s;
    cout << "Enter the number:" << endl;
    cin >> s;
    if (arm(s)) {
        cout << s << " is an armstrong number" << endl;
    } else {
        cout << s << " is not an armstrong number" << endl;
    }

    return 0;
}
