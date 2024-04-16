//Date.cpp

#include "Date.h"
#include "Triad.h"
#include <iostream>
#include <sstream>

using namespace std;

Date Date::operator=(Date t) {
    setDay(t.getDay());
    setMonth(t.getMonth());
    setYear(t.getYear());
    return *this;
}

Date::Date() {
    setDay(0);
    setMonth(0);
    setYear(0);
}

Date::Date(Triad t) {
    setDay(t.getDay());
    setMonth(t.getMonth());
    setYear(t.getYear());
}

Date::Date(const Date& t) {
    setDay(t.getDay());
    setMonth(t.getMonth());
    setYear(t.getYear());
}

istream& operator >> (istream& in, Date& r) {
    int h, m, s;
    do {
        cout << "Enter day: ";
        in >> h;
        cout << "Enter month: ";
        in >> m;
        cout << "Enter year: ";
        in >> s;
    } while (!(h < 30 && h > 0 && m < 12 && m > 0 && s >= 0));
    r.setDay(h);
    r.setMonth(m);
    r.setYear(s);
    return in;

}

Date::operator string () const {
    stringstream ss;
    ss << "d: " << getDay() << "\nm: " << getMonth() << "\ny: " << getYear() << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const Date& r) {
    out << string(r);
    return out;
}

void Date::incremYear() {
    Triad::incremYear();
}

Date operator+(Date r, int n) {
    Date res;
    res.setMonth(r.getMonth() + n);
    return res;
}

Date operator*(Date r, int n) {
    Date res;
    res.setYear(r.getYear() + n);
    return res;
}

Date& Date::operator ++() {
    int tmp = getDay();
    setDay(++tmp);
    return *this;
}

Date& Date::operator --() {
    int tmp = getDay();
    setDay(--tmp);
    return *this;
}

Date Date::operator ++(int) {
    Date n(*this);
    int tmp = getMonth();
    setMonth(++tmp);
    return n;
}

Date Date::operator --(int) {
    Date n(*this);
    int tmp = getMonth();
    setMonth(--tmp);
    return n;
}
