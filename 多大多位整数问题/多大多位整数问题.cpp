#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string a, string b) {
	return !(a + b < b + a);
}
int main() {
	int n;
	cout << "�������������ĸ���n" << endl;
	cin >> n;
	string* str = new string[n];
	cout << "������" << n << "����������" << endl;
	for (int i = 0; i < n; i++)
		cin >> str[i];
	sort(str, str + n, compare);
	cout << "�������Ϊ��" << endl;
	for (int i = 0; i < n; ++i)
		cout << str[i];
	cout << endl;
	return 0;
}