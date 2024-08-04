#include<iostream>
using namespace std;

bool palindrome(int i, string s){
    int n = s.length();
    if(i>=s.length()/2) return true;
    if(s[i]!=s[s.length()-i-1]) return false;
    return (i+1, s);
}
int main(){
    string s;
    cout << "enter string:" << endl;
    cin >> s;

    if(palindrome(0, s)){
    cout << "PALINDROME" << endl;
    }
    else{
        cout << "NOT PALINDROME" << endl;
    }
}