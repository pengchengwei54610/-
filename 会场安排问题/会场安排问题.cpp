#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	cout << "����������" << endl;
	cin >> n;
	int* start = new int[n], * end = new int[n];
	cout << "������ " << n << " �����Ӧ�Ŀ�ʼʱ��ͽ���ʱ��" << endl;
	int i;
	for (i = 0; i < n; ++i)
		cin >> start[i] >> end[i];
	//����
	sort(start, start + n);
	sort(end, end + n);
	int j = 0, count = 0;
	for (i = 0; i < n; ++i) {
		if (start[i] < end[j])
			++count;
		else
			++j;
	}
	cout << "����Ҫ�Ļ᳡���У�" << endl << count << endl;
	delete[] start, end;
	return 0;
}