#include <iostream>
#include <cstring>
#include <cassert>
#include "Stack.h"
#include <TCHAR.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "20211522 박상은" << endl;
	cout << "Input RPN Equation" << endl;
	Stack <double> s;
	double op1, op2;
	char c;

	while ((c = cin.peek()) != '\n') {
		if (isdigit(c)) {
			cin >> op1;
			s.push(op1);
		}
		else {
			cin >> c;
			op2 = s.pop();
			op1 = s.pop();
			switch (c) {
			case '+': s.push(op1 + op2); break;
			case '-': s.push(op1 - op2); break;
			case '*': s.push(op1 * op2); break;
			case '/': if (op2 == 0)cerr << "Division by zero!\n";
					else
				s.push(op1 / op2); break;
			}
		}
		while ((c = cin.peek()) == ' ') {
			cin.ignore(1, ' ');
		}
	}
	cout << "Result: " << s.pop();
	return 0;
}
