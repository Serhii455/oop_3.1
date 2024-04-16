//Triad.h

#pragma once
#include <string>

using namespace std;

class Triad
{
	int day, month, year;
public:
	Triad();
	Triad(int, int, int);
	Triad(const Triad&);
	~Triad() { };

	Triad operator=(Triad t);

	void setDay(int d) { day = d; };
	void setMonth(int m) { month = m; };
	void setYear(int y) { year = y; };

	int getDay() const { return this->day; };
	int getMonth() const { return this->month; };
	int getYear() const { return this->year; };

	void incremDay();
	void incremMonth();
	void incremYear();

	friend istream& operator >> (istream& in, Triad& r);
	friend ostream& operator << (ostream& out, const Triad& r);

	operator string () const;
};
