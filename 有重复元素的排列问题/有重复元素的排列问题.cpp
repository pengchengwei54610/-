#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

const int N = 100;

int n, cnt;
char s[N + 10];

template<class Type>
//�ж�ǰ���Ƿ�������ظ�Ԫ��
bool ok(Type a[], int l, int cur)
{
	for (int i = l; i < cur; i++)
	{
		if (a[cur] == a[i])
		{
			return false;//���ظ�Ԫ�أ������н���
		}
	}
	return true;
}

template<class Type>
void doit(Type a[], int l, int r) {
	if (l == r) {
		printf("%d:", ++cnt);
		for (int i = 1; i <= r; i++) {
			printf("%c ", a[i]);
		}
		puts("");
		return;
	}
	for (int k = l; k <= r; k++) {
		if (ok(a, l, k)) {
			swap(a[l], a[k]);
			doit(a, l + 1, r);
			swap(a[l], a[k]);
		}
	}
}

int main() {
	cout << "�����������Ԫ�ظ���" << endl;
	scanf("%d", &n);
	scanf("%s", s + 1);
	doit(s, 1, n);
	cout << "����" << cnt << "������" << endl;
	return 0;
}