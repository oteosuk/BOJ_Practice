//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h> 왠만한거 전부
//#include <cstdio>   printf(), scanf()
//#include <algorithm> max(),min()
//#include <cmath>   sqrt()
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

using namespace std;

int main()
{
	int N;
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;

		sum += a;
	}
	cout << sum - N + 1;
}
