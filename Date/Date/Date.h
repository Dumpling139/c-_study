#pragma once
#include<iostream>
using namespace std;


class Date {
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	int Getmonthday()
	{
		int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (_month == 2 && ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)))
			return 29;
		return a[_month];
	}
	Date(const int year = 2024, const int month = 1, const int day = 1);
	Date(Date& tmp);
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	Date& operator+=(int day);
	Date& operator-=(int day);
	Date operator++(int);
	Date operator--(int);
	Date operator++();
	Date operator--();
	Date operator+(int day);
	Date operator-(int day);
	int operator-(Date& d);
	void print();
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);