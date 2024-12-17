#include<iostream>
using namespace std;
#include"Date.h"

bool Date::operator==(const Date& d) const
{
	if (_year == d._year && _month == d._month && _day == d._day)
		return true;
	return false;
}
bool Date::operator!=(const Date& d) const
{
	return !(*this == d);
}
bool Date::operator>(const Date& d) const
{
	if (_year > d._year)
		return true;
	else if (_year < d._year)
		return false;
	else
	{
		if (_month > d._month)
			return true;
		else if (_month < d._month)
			return false;
		else
		{
			if (_day > d._day)
				return true;
		}
	}
	return false;
}
bool Date::operator>=(const Date& d) const
{
	if (_year > d._year)
		return true;
	else if (_year < d._year)
		return false;
	else
	{
		if (_month > d._month)
			return true;
		else if (_month < d._month)
			return false;
		else
		{
			if (_day >= d._day)
				return true;
		}
	}
	return false;
}
bool Date::operator<(const Date& d) const
{
	return !(*this >= d);
}
bool Date::operator<=(const Date& d) const
{
	return !(*this > d);
}
Date& Date::operator+=(int day)
{
	_day += day;
	while (true)
	{
		int tmp = this->Getmonthday();
		if (_day > tmp)
		{
			_day -= tmp;
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		else
			break;
	}
	return *this;
}
Date& Date::operator-=(int day)
{
	_day -= day;
	while (true)
	{
		if (_day <= 0)
		{
			_month--;
			if (_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day += this->Getmonthday();
		}
		else
			break;
	}
	return *this;
}

Date Date::operator++(int)
{
	Date d = *this;
	++*this;
	return d;
}
Date Date::operator--(int)
{
	Date d = *this;
	--*this;
	return d;
}
Date Date::operator++()
{
	*this += 1;
	return *this;
}
Date Date::operator--()
{
	*this += 1;
	return *this;
}
Date Date::operator+(int day)
{
	Date d = *this;
	d += day;
	return d;
}
Date Date::operator-(int day)
{
	Date d = *this;
	d -= day;
	return d;
}
int Date::operator-(Date& d)
{
	Date max = *this;
	Date min = d;
	int day = 0;
	int flag = 1;
	if (*this < d)
	{
		flag = -1;
		max = d;
		min = *this;
	}
	while (max != min)
	{
		day++;
		min++;
	}
	return day * flag;
}
void Date::print()
{
	cout << _year << " " << _month << " " << _day << endl;
}
Date::Date(const int year = 2024, const int month = 1, const int day = 1)
{
	_year = year;
	_month = month;
	_day = day;
}
ostream& operator<<(ostream& out,const Date& d)
{
	cout << d._year << " " << d._month << " " << d._day << endl;
	return out;
}
istream& operator>>(istream& in,Date& d)
{
	cin >> d._year >> d._month >> d._day;
	return in;
}




int main()
{
	Date a1(2024,12,11);
	Date a2(2024, 11, 30);
	Date a3(2024, 5, 1);
	cout << a1 - a2 << endl;
	cout << a1 - a3 << endl;
	a1.print();
	return 0;
}

