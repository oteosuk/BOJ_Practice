#include <iostream>


using namespace std;


int main()
{
	string s;
	string alp = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < 26; i++)
		cout << (int)s.find(alp[i]) << " ";
	return 0;
}
