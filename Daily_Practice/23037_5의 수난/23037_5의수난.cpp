//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h> 왠만한거 전부
//#include <cstdio>   printf(), scanf()
//#include <algorithm> max(),min()
//#include <cmath>   sqrt(), pow()
//#include <cstdlib> abs()
//#include <climits>
//#include <string>
//#include <utility>

/*
#define endl '\n'
using ll = long long;
using ld = long double;
const double PI = 3.1415926535;
*/

#include <iostream>
#include <string>
#include <cmath>

#define endl '\n'

using namespace std;

string s;

int main() {

	int ans = 0;

	cin >> s;
	for (int i = 0; i < 5; i++) {
		ans += pow(s[i] - 48, 5);
	}
	cout << ans << endl;
}