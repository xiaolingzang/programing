// SaiMa4.cpp : 定义控制台应用程序的入口点。
//
// SiaMa4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;


int main()
{
	int light_num;
	int streat_length;
	cin >> light_num >> streat_length;
	vector<int> light_locate;
	int x;
	for (int i = 0; i < light_num; i++)
	{
		cin >> x;
		light_locate.push_back(x);
	}
	sort(light_locate.begin(), light_locate.end());
	int diff1 = light_locate[0] - 0;
	int diff2 = streat_length - light_locate[light_num - 1];
	int diff = diff1 > diff2 ? diff1 : diff2;
	int diff = 0;
	for (int i = 0; i < (light_num - 1); i++)
	{
		if (light_locate[i + 1] - light_locate[i]>diff)
		{
			diff = light_locate[i + 1] - light_locate[i];
		}
	}
	double d = diff / 2.0;
	cout << d << endl;
	int xx = 5;
	int yy = 6;
	return 0;
}


