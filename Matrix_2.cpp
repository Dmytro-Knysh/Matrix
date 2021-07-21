#include<iostream>
#include<Windows.h>
#define r 3
#define q 3

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int  h[r][q];
	int a, b, k = 0;
	cout << "Input a, b: ";
	cin >> a >> b;
	for (int i = 0; i < r; i++)
	for (int j = 0; j < q; j++)
	{

	cout << "Input h[" << i << "][" << j << "] :";
	cin >> h[i][j];
	}
	for (int i = 0; i < q; i++) 
	{
	for (int j = 0; j < r; j++)
	if (a<=h[i][j] && h[i][j]<=b && h[i][j] % 2 != 0)
	{
	k += h[i][j];
	}
	}
	cout <<"The sum of odd numbers: "<< k;
	return 0;
}
