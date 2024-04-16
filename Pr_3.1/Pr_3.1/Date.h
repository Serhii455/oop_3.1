//Date.h

#pragma once
#include "Triad.h"
#include <string>
#include <sstream>

class Date: public Triad
{
public:
	Date();
	Date(Triad);
	Date(const Date&);
	~Date() { };

	Date& operator ++();
	Date& operator --();
	Date operator ++(int);
	Date operator --(int);

	friend Date operator+(Date r, int n);
	friend Date operator*(Date r, int n);
	void incremYear();

	Date operator=(Date t);

	friend ostream& operator << (ostream& out, const Date& r);
	friend istream& operator >> (istream& in, Date& r);

	operator std::string() const;
};
