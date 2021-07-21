#include<iostream>
#include<Windows.h>
#define n 3
#define m 4

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int  k[n][m] = { {2,2,2,1}, {3,3,3},{4,1,2,4} }, r[n], q;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		int d = 0;
		for (int j = 0; j < m - 1; j++)
		{
				
			for (int t = 0; t < m; t++)
			{
				if (k[i][j] == k[i][t] && j != t)
				{
					d++;
					r[i] = d;
				}
			}
		}
	}
	
	int max = 0;
		for (int i = 0; i < n; i++)
		{

				if (r[i] >= max)
				{
					q = i;
					max = r[i];
					flag = true;
				}
		}
		for (int i = 0; i < n; i++) {

			for (int j = 0; j < m; j++)

				cout << k[i][j] << "  ";

			cout << endl;

		}
	if (flag)
	{
		cout << "Рядок номер: " << q << endl;
	}
	else
	{
		cout << "Не існує рядків з однаковими елементами";
	}
	return 0;
}