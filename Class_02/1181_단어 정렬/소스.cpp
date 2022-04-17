#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) // 밑에 sort함수에 넣을 조건
{
	if (a.length() == b.length())
		return a < b; // a와 b가 길이가 같다면, 사전상으로 더 먼저오는걸 앞에
	return a.length() < b.length(); // a 와 b가 길이가 다르다면 더 짧은게 앞에
}


int main()
{
	int N;
	cin >> N;
	vector<string> vec; // 문자열의 vector 를 vec으로 생성
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if (find(vec.begin(), vec.end(), s) == vec.end()) // vec을 다 탐색해서 s가 없으면 마지막 원소 반환
			vec.push_back(s); // 즉 입력받은 s가 vec에 없다면 push_back 즉 뒤에 s를 삽입
	}
	sort(vec.begin(), vec.end(), compare); // 위에 compare함수 조건에 맞게 정렬

	for (int i = 0; i < vec.size(); i++) // 정렬된 vec을 다 출력. 여기서 vec.length()가 아니라 vec.size()인것에 주의
	{
		cout << vec[i] << '\n';
	}
}