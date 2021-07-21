#include<iostream>
#include<Windows.h>
#include<iomanip>
#define n 4
#define m 3

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int  a[n][m] = { {-2, 3, -4},{-3, -6},{9, -8, 2},{11, 12, 3} }, d = 0, v = 0, s;
	bool flag = false;
	for (int j = 0; j < m && flag == false; j++)
	{	
		d = 0;
		v = 0;
		for (int i = 0; i < n; i++)
		{
			if (i == 0 && j == 0)
			{
				continue;
			}
			if (a[i][j] > 0)
			{
				d++;
			}
			else if(a[i][j] < 0)
			{
				v++;
			}
		}
		if (d == v )
		{
			flag = true;
			s = j;
		}
	}
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)

			cout << setw(3) << a[i][j] << "  ";

		cout << endl;

	}
	if (flag)
	{
		cout << "Column number: "<<s;
	}
	else
	{
		cout << 0 <<" Such a column does not exist";
	}
	return 0;
}
	
		
