#include<iostream>
#include<Windows.h>
#define n 2
#define m 4

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int  a[m][n], b[m];
	for (int i = 0; i < m; i++)
	{
		cout << "Input b[" << i << "]: ";
		cin >> b[i];
	}
	for (int j = 0; j < n; j++)
	for (int i = 0; i < m; i++)
	{
	a[i][j] = b[i];
	}
	for (int i = 0; i < m; i++) {
	for (int j = 0; j < n; j++)
	cout << a[i][j] << " ";
	cout << endl;
	}
	return 0;
}