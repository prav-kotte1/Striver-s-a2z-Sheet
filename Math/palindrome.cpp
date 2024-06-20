#include<iostream>
using namespace std;

bool palindrome(int n){
        if (n < 0) return false;
        long long reverse = 0;
        long long temp = n;

        while(temp != 0 ){
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        return reverse == n;
};

int main(){
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    if(palindrome(n)){
        cout << n << " is a palindrome" << endl;
    }
    else{
        cout << n << " is not a palindrome" << endl;
    }

    return 0;
}