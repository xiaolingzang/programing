// SaiMa8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	vector<int> light(M+1, 1);
	vector<vector<int>> location(N, vector<int>(2));
	int start, end;
	for (int i = 0; i < N; i++) {
		cin >> location[i][0] >> location[i][1];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = location[i][0]; j <= location[i][1]; j++)
		{
			light[j] = 0;
		}
	}
	int count = 0;
	for (int i = 0; i < light.size(); i++)
	{
		count = count + 1;
	}
	return count;
}

