#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	if (n == 0) {
	    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << 0;
	}
	else {
		int secondLast = 0;//for (i-2)th term
		int last = 1;//for (i-1)th term
		cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << secondLast << " " << last << " ";
		int cur; //for ith term
		for (int i = 2; i <= n; i++) {
			cur = last + secondLast;
			secondLast = last;
			last = cur;
			cout << cur << " ";
		}
	}
}