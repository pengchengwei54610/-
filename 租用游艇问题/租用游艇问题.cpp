#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n, i, j;
	cout << "���������վ������" << endl;
	cin >> n;

	int** f = new int* [n + 1];	
	for (i = 0; i < n + 1; i++)
		f[i] = new int[n + 1]{ 0 };

	for (i = 1; i <= n; i++)		
		for (j = i + 1; j <= n; j++) {
			cout << "���������վ " << i << " ������վ " << j << " �����" << endl;
			cin >> f[i][j];
		}
	for (int r = 2; r <= n; r++)
		for (i = 1; i <= n - r + 1; i++) {
			j = i + r - 1;
			for (int k = i + 1; k < j; k++)
				if (f[i][k] + f[k][j] < f[i][j])
					f[i][j] = f[i][k] + f[k][j];
		}
	cout << "������� " << f[1][n] << endl;
	return 0;
}