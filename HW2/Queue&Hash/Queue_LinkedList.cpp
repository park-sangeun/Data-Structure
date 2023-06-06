#include <iostream>
#include "Queue.h"
#include <cassert>
using namespace std;

int main()
{
    cout << "20211522 박상은" << endl;
    cout << "input char (if you want to end, enter .): ";
    char c;
    Queue <char> q;
    while (1) {
        cin >> c;
        if (c == '.')
            break;
        q.enqueue(c);
    }
    while (!q.isEmpty()) {
        cout << "Q: " << q.dequeue() << '\t';
    }
    return 0;
}
