//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h>
//#include <cstdio>   printf(), scanf()
//#include <algorithm> max(),min()
//#include <cmath>   sqrt(), pow()
//#include <cstdlib> abs()
//#include <climits>
//#include <string>
//#include <utility>

/*
using ll = long long;
using ld = long double;
const double PI = 3.1415926535;
*/

#include <iostream>
#define endl '\n'
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	int N;
	cin >> N;
	cout << "Gnomes:" << endl;

	while (N--) {
		int a, b, c;
		cin >> a >> b >> c;

		if ((a <= b && b <= c) || (a >= b && b >= c))
			cout << "Ordered" << endl;
		else
			cout << "Unordered" << endl;
	}

	return 0;
}