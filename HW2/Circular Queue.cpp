#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    cout << "20211522 박상은" << endl;
    cout << "input char(end == .)" << endl;
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

