// SaiMa5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool ISZS(int x)
{
	if (x == 1) return false;
	if (x==2)
	{
		return true;
	}
	for (int i = 2; i <=sqrt(double(x)); i++)
	{
		if ((x)%i==0)
		{
			return false;
		}
	}
	return true;
}

vector<int> ComputeZS(int N)
{
	vector<int> arrayZS;
	if (ISZS(N))
	{
		arrayZS.push_back(N);
		return arrayZS;
	}
	for (int i = 2; i < N; i++)
	{
		if (N%i == 0)
		{
			while (N%i == 0)
			{
				arrayZS.push_back(i);
				N = N / i;
			}

			if (ISZS(N))
			{

				arrayZS.push_back(N);
				break;
			}
		}
	}
		return arrayZS;
}

char arr[5][1000];
int pos = 0;

void printMultiSign() {
	if (pos != 0) {
		arr[0][pos] = ' ';
		arr[1][pos] = ' ';
		arr[2][pos] = '*';
		arr[3][pos] = ' ';
		arr[4][pos++] = ' ';
	}
}

void printNumToArray(int num) {
	int tmp = 1;
	while (num / tmp / 10 != 0) {
		tmp *= 10;
	};
	printMultiSign();

	while (tmp != 0) {
		int t = num / tmp % 10;
		tmp = tmp / 10;
		switch (t) {
		case 0:
			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 1:
			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 2:
			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';
			break;
		case 3:
			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 4:
			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 5:
			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 6:
			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 7:
			arr[0][pos] = ' ';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 8:
			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		case 9:
			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = ' ';
			arr[4][pos++] = ' ';

			arr[0][pos] = '-';
			arr[1][pos] = ' ';
			arr[2][pos] = '-';
			arr[3][pos] = ' ';
			arr[4][pos++] = '-';

			arr[0][pos] = ' ';
			arr[1][pos] = '|';
			arr[2][pos] = ' ';
			arr[3][pos] = '|';
			arr[4][pos++] = ' ';
			break;
		}
	}
}

void printArray() {
	arr[0][pos] = '\0';
	arr[1][pos] = '\0';
	arr[2][pos] = '\0';
	arr[3][pos] = '\0';
	arr[4][pos] = '\0';
	pos = 0;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
}
void printZS(vector<int> printArray)
{
	for (int i = 0; i< printArray.size(); i++)
	{
		printNumToArray(printArray[i]);
	}
}


int main()
{
	int N;
	while (cin>>N)
	{
		vector<int> arrayZS=ComputeZS(N);
		printZS(arrayZS);
		printArray();

	}
	int y;
	cin >> y;
    return 0;
}

