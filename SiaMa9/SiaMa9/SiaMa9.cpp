// SiaMa9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Month[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31 };
/*
1.能被4整除而不能被100整除.
2.能被400整除.
*/
bool IsLeapYear(int year) {
	if (((year%4==0)&&(year%100!=0))||(year%400==0))
	{
	return true;
	}
	return false;
}
int compute_days_year( int year,int month,int days)
{
	int accumulate_day = 0;
	int residue;
	if (IsLeapYear(year))
	{
		for (int i = 1; i < month; i++)
		{
			accumulate_day += Month[1][i-1];
		}
		accumulate_day += days;
		residue = 366 - accumulate_day;
	}
	else
	{
		for (int i = 1; i < month; i++)
		{
			accumulate_day += Month[0][i-1];
		}
		accumulate_day += days;
		residue = 365 - accumulate_day;
	}


	return residue ;
}

int compute_diffdays(int year, int curryear, int month, int currmonth, int days, int currdays) {
	int diffdays = 0;
	if (curryear == year)
	{
		int  currdaysOfOneYear = compute_days_year(curryear, currmonth, currdays);
		int  daysOfOneYear = compute_days_year(year,month, days);
		diffdays = diffdays + (currdaysOfOneYear - daysOfOneYear);
	}
	else
	{
		diffdays += compute_days_year(curryear, currmonth, currdays);
		for (int k = curryear+1; k < year; k++)
		{
			if (IsLeapYear(k))
			{
				diffdays += 366;
			}
			else
			{
				diffdays += 365;
			}
		}

		if (IsLeapYear(year))
		{
			diffdays+=366- compute_days_year(year, month, days);
		}
		else
		{
			diffdays += 365 - compute_days_year(year, month, days);
		}

	}
	
	return diffdays;
}


int main()
{
	int year, month, days;
	scanf_s("%d-%d-%d", &year, &month, &days);
	int curryear = 2015;
	int currmonth = 10;
	int currdays = 18;
	int diffdays = compute_diffdays(year, curryear, month, currmonth, days, currdays);
	printf("%d", diffdays);
}

