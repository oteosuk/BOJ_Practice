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
	cin >> N;

	long long j = 3;
	long long sum = 5;


	for (int i = 1; i < N; i++)
	{
		sum = sum + (j * 3 - 2);
		j++;
	}

	cout << sum % 45678;
}
