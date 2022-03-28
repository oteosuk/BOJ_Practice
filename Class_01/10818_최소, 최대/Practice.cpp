#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int main() {

	int max = -1000001;
	int min = 1000001;

	int n;
	cin >> n;

	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;

		if (input < min) {
			min = input;
		}
		if (input > max) {
			max = input;
		}
	}
	cout << min << " " << max;
	return 0;
}