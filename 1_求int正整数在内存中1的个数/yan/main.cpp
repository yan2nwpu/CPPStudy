#include <iostream>

using namespace std;

int main() {
	int a = 0;
	cin >> a;
	if (a <= 0) {
		return 1;
	}
	int count = 0;
	while (a > 0) {
		if (a % 2) {
			count++;
		}
		a = a / 2;
	}
	cout << count << endl;
	
	return 0;
}