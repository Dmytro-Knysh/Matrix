#include<iostream>
#include<Windows.h>
#define n 3
#define m 4

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int  k[n][m], a, min, max, MIN[n], MAX[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{

			cout << "Input K[" << i << "][" << j << "] :";

			cin >> k[i][j];

		}
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)

			cout << k[i][j] <<"  ";

		cout << endl;

	}
	for (int i = 0; i < n; i++)
	{
		MIN[i] = k[i][0];
		for (int j = 0; j < m; j++)
		{
			if (k[i][j] <MIN[i])
			{
				MIN[i] = k[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Minimum item in line "<< i <<":" << MIN[i] << endl;
	}
	for (int j = 0; j < m; j++)
	{
		MAX[j] = k[0][j];
		for (int i = 0; i < n; i++)
		{
			if (k[i][j] > MAX[j])
			{
				MAX[j] = k[i][j];
			}

		}
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Maximum item in "<< i <<" column:" << MAX[i] << endl;
	}
	return 0;
}
