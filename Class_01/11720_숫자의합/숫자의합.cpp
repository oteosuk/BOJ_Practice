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
		sum += (b[i]-'0'); // char���� string b�� �� ���Ҹ� �ƽ�Ű�ڵ�'0'(����48)�� �����ν� ������ ��ȯ�Ѵ�.
	}

	cout << sum << endl;

	return 0;
}