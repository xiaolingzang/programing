// SaiMa6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int N;
	cin >> N;
	int x;
	int y;
	vector<int> peoplenum;
	int maxnum = 0;
	for (int i = 0; i <N; i++)
	{
		cin >> x >> y;
		if (i==0)
		{
			peoplenum.push_back(x + y);
		}
		else
		{
			peoplenum.push_back(peoplenum[i - 1] - x + y);
		}	
		if (peoplenum[i]>maxnum)
		{
			maxnum = peoplenum[i];
		}
	}

	cout << maxnum;
    return 0;
}

