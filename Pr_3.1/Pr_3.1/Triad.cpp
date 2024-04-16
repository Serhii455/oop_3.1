//Triad.cpp

#include "Triad.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

Triad Triad::operator=(Triad t) {
	day = t.day;
	month = t.month;
	year = t.year;
	return *this;
}

Triad::Triad() {
	day = 0;
	month = 0;
	year = 0;
}

Triad::Triad(int h, int m, int s) {
	day = h;
	month = m;
	year = s;
}

Triad::Triad(const Triad& t) {
	this->day = t.day;
	this->month = t.month;
	this->year = t.year;
}

void Triad::incremYear() {
	int tmp = getYear();
	setYear(++tmp);
}

istream& operator >> (istream& in, Triad& r) {
	int d, m, y;
	do {
		cout << "Enter day: ";
		in >> d;
		cout << "Enter month: ";
		in >> m;
		cout << "Enter year: ";
		in >> y;
	} while (!(d <= 31 && d >= 1 && m >= 1 && m <= 12 && y >= 0 && y <= 2100));
	r.setDay(d);
	r.setMonth(m);
	r.setYear(y);
	return in;
}

ostream& operator << (ostream& out, const Triad& r) {
	out << string(r);
	return out;
}

Triad::operator string () const {
	stringstream ss;
	ss << "day: " << getDay() << endl;
	ss << "month: " << getMonth() << endl;
	ss << "year: " << getYear() << endl;
	return ss.str();
}

void Triad::incremDay() {
	day++;
}

void Triad::incremMonth() {
	month++;
}
