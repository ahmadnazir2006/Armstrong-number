#include<iostream>
using namespace std;
int main() {
	int n, d;
	int sum = 0;
	int count = 0;
	cout << "Enter the number\n";
	
	cin >> n;
	for (int i = n; i > 0; i = i / 10) {
		count=count+ 1;
		
	}
	for (int i = n; i > 0; i = i / 10) {
		d = i % 10;
		int product = d;
		for (int i = 1; i < count; i++) {
			product = d * product;
		}
		sum = sum + product;
	}
	if (sum != n) {
		cout << "It is not an armstrong number";
	}
	else {
		cout << "It is an armstong number";
	}



	
	return 0;
}
