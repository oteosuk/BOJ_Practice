//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h> �ظ��Ѱ� ����
//#include <cstdio>   printf(), scanf()
//#include <algorithm> max(),min()
//#include <cmath>   sqrt()
//#include <cstdlib> abs()
//#include <climits>
//#include <string>
//#include <utility>

//const double PI = 3.1415926535;

/*#define endl '\n'
using ll = long long;
using ld = long double;
*/

#include <iostream>

using namespace std;

bool arr[1000000]; // K�� ������ ���� boolean�� �迭 ����, ���� �� False(0) ����
int K;
string P;

bool divcheck(int num) // ���� ���ڿ��� num���� ������������� Ȯ���ϴ� �Լ�
{
	int sum = 0;
	for (int i = 0; P[i]; i++)
		sum = (sum * 10 + (P[i] - '0')) % num;
	if (sum == 0) return true;
	return false;
}


int main()
{
	cin >> P >> K;
	for (int i = 2; i < K; i++) {
		if (arr[i]) continue; //true(1) �� �ֵ��� �Ҽ��� �ƴѾֵ��̹Ƿ� �ؿ� divcheck�� �������� �ʰ� ����i������ �ѱ��.
		if (divcheck(i)) { // �Ҽ��� i�� ������ ������ �������ٸ� K���� ���� �Ҽ� i�� ������������̹Ƿ� BAD
			cout << "BAD " << i;
			return 0;
		}
		for (int j = 2 * i; j < K; j += i) // �����佺�׳׽��� ü(�Ҽ��� �Ÿ���, �Ҽ��ƴѾֵ� ����)
			arr[j] = true; //true(1) �� �ֵ��� �Ҽ��� �ƴѾֵ��̹Ƿ� �ɷ�����
	}

	cout << "GOOD";
}
