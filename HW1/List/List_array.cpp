#include <iostream>
#include "List.h"
#include "cassert"
using namespace std;

int main()
{
    cout << "20211522 박상은" << endl;
    List l;
    ListElementType i;
    cout << "Enter items to add to list, add 0 to stop: ";
    cin >> i;

    while (i != 0) {
        l.insert(i);
        cin >> i;
    }
    cout << "Here are the items in the list. \n";
    ListElementType elem;
    bool notEmpty(l.first(elem));
    while (notEmpty) {
        cout << elem << endl;
        notEmpty = l.next(elem);
    }
    return 0;
}

