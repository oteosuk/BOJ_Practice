#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	string b;
	int sum = 0;
	
	cin >> a;
	cin >> b;


	for (int i = 0; i < a; i++)
	{
		sum += (b[i]-'0'); // char형인 string b의 각 원소를 아스키코드'0'(정수48)을 뺌으로써 정수로 변환한다.
	}

	cout << sum << endl;

	return 0;
}