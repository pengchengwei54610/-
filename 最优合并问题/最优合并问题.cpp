#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 0xffff
#define MIN 0
int main() {
	int n;
	cout << "��������������" << endl;
	cin >> n;
	int* arr = new int[n], * temp = new int[n];
	cout << "������ " << n << " �����еĳ���" << endl;
	int i;
	for (i = 0; i < n; ++i) {
		cin >> arr[i];
		temp[i] = arr[i];
	}
	int count_max = 0;
	for (i = n - 1; i > 0; --i) {
		sort(temp, temp + n);
		temp[n - 1] += temp[n - 2];
		count_max += temp[n - 1] - 1;
		temp[n - 2] = MIN;
	}
	for (i = 0; i < n; ++i)
		temp[i] = arr[i];
	int count_min = 0;
	for (i = 0; i < n - 1; ++i) {
		sort(temp, temp + n);
		temp[0] += temp[1];
		count_min += temp[0] - 1;
		temp[1] = MAX;
	}
	cout << "��������" << count_max << endl;
	cout << "���ٴ�����" << count_min << endl;
	delete[] arr, temp;
	return 0;
}