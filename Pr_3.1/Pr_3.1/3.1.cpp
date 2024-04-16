//3.1.cpp

#include "Date.h"
#include "Triad.h"
#include <iostream>

using namespace std;

int main()
{
    Date t1, res;
    Triad tr1, tr2;

    cout << "t1 = "; cin >> t1;
    cout << t1 << endl;

    cout << "tr1 = "; cin >> tr1;
    Date t2(tr1);
    cout << "t2: " << t2 << endl;

    ++t2;
    t2++;
    t2.incremYear();
    cout << "t2(increm) = " << t2 << endl;

    cout << "t2: " << t2;

    int n;
    cout << "(day) n = "; cin >> n;
    res = t2 + n;
    cout << "t2 + n =" << res.getMonth() << endl;
    cout << "(month) n = "; cin >> n;
    res = t2 * n;
    cout << "t2 * n = " << res.getDay() << endl;

    tr2 = t1;
    cout << "tr2: " << endl;
    cout << "tr2: " << tr2 << endl;
}
