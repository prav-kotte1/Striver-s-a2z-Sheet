#include<iostream>
using namespace std;

int main(){
    string s;
    int n;
    cout << "enter string:" << endl;
    cin >> s ;
    n = s.length();
    for(int i = n; i >= 0; i--){
        cout << s[i];
    }
    return 0;
}