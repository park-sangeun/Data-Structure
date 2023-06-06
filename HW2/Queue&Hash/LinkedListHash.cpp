#include <iostream>
#include <cstring>
#include "CPhone.h"
#include "Table.h"
using namespace std;
int stringToInt(string strName);

int main()
{
    cout << "20211522 박상은" << endl;

    Table<int, CPhone> t2;
    CPhone p1(20030219, "sangeun"), p2(19991129, "gana"), p3(20221010, "dara");
    int np1 = stringToInt("sangeun");
    int np2 = stringToInt("gana");
    int np3 = stringToInt("dara");
    CPhone p4;
    cout << np1 << " " << np2 << " " << np3 << endl;
    t2.insert(np1, p1);
    t2.insert(np2, p2);
    t2.insert(np3, p3);
    t2.dump();

    t2.lookup(stringToInt("sangeun"), p4);

    return 0;
}

int stringToInt(string strName) {
    int nSum = 0;
    for (int i = 0; i < strName.size(); i++) {
        nSum += strName.at(i);
    }
    return nSum;
}