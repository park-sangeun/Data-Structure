#include <iostream>
#include <cstring>
#include "CPhone.h"
#include "Table.h"
using namespace std;
#define num 7
int stringToInt(string name);

int main()
{
    cout << "20211522 박상은" << endl;
    //Table<int, int> t;
    //cout << "Input key yyyymmdd 순서대로: ";
    //int key, data;
    //for (int i = 0; i < num; i++) {
    //    cin >> key >> data;
    //    t.insert(key, data);
    //}
    //t.dump();

    ////delete key&data
    //t.deleteKey(1);
    //t.deleteKey(3);
    ////insert one key&data
    //t.insert(14, 20230504);
    //t.dump();


	Table<int, CPhone> t2;
    CPhone p1(20030219, "sangeun"), p2(19991129, "taeuk"), p3(20221010, "love");
    int np1 = stringToInt("sangeun");
    int np2 = stringToInt("taeuk");
    int np3 = stringToInt("love");
    CPhone p4;
    cout << np1 <<" "<< np2 << " "<< np3<<endl;
    t2.insert(np1, p1);
    t2.insert(np2, p2);
    t2.insert(np3, p3);
    t2.dump();

    t2.lookup(stringToInt("sangeun"),p4);

    return 0;
}


int stringToInt(string strName) {
    int nSum = 0;
    for (int i = 0; i < strName.size(); i++) {
        nSum += strName.at(i);
    }
    return nSum;
}