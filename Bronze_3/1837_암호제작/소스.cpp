//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h> 왠만한거 전부
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

bool arr[1000000]; // K의 범위에 맞춘 boolean형 배열 생성, 현재 다 False(0) 값임
int K;
string P;

bool divcheck(int num) // 숫자 문자열을 num으로 나누어떨어지는지 확인하는 함수
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
		if (arr[i]) continue; //true(1) 인 애들이 소수가 아닌애들이므로 밑에 divcheck를 수행하지 않고 다음i값으로 넘긴다.
		if (divcheck(i)) { // 소수인 i로 나눠봄 나누어 떨어진다면 K보다 작은 소수 i로 나누어떨어진것이므로 BAD
			cout << "BAD " << i;
			return 0;
		}
		for (int j = 2 * i; j < K; j += i) // 에라토스테네스의 체(소수만 거르기, 소수아닌애들 지움)
			arr[j] = true; //true(1) 인 애들이 소수가 아닌애들이므로 걸러도됨
	}

	cout << "GOOD";
}
