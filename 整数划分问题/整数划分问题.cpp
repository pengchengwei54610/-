#include<iostream>
using namespace std;
//�������֣�nΪ��Ҫ���ֵ���������mΪ�����������Ǹ���
int equationcount(int n, int m)
{
	if (n == 1 || m == 1) {
		return 1;
	}
	else if (n > m) {
		return equationcount(n - m, m) + equationcount(n, m - 1);
	}
	else if (n < m) {
		return equationcount(n, n);
	}
	else {
		return 1 + equationcount(n, m - 1);
	}
}
int main()
{
	int a;
	cout<<"��������Ҫ���ֵ�������" << endl;
	cin >> a;
	cout <<"��"<< equationcount(a, a)<<"�ֻ���";
	return 0;
}
