#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) // �ؿ� sort�Լ��� ���� ����
{
	if (a.length() == b.length())
		return a < b; // a�� b�� ���̰� ���ٸ�, ���������� �� �������°� �տ�
	return a.length() < b.length(); // a �� b�� ���̰� �ٸ��ٸ� �� ª���� �տ�
}


int main()
{
	int N;
	cin >> N;
	vector<string> vec; // ���ڿ��� vector �� vec���� ����
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (find(vec.begin(), vec.end(), s) == vec.end()) // vec�� �� Ž���ؼ� s�� ������ ������ ���� ��ȯ
			vec.push_back(s); // �� �Է¹��� s�� vec�� ���ٸ� push_back �� �ڿ� s�� ����
	}
	sort(vec.begin(), vec.end(), compare); // ���� compare�Լ� ���ǿ� �°� ����

	for (int i = 0; i < vec.size(); i++) // ���ĵ� vec�� �� ���. ���⼭ vec.length()�� �ƴ϶� vec.size()�ΰͿ� ����
	{
		cout << vec[i] << '\n';
	}
}