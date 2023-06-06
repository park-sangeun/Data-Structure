#include <iostream>
using namespace std;

class Number {
private:
	int value;

public:
	Number() { value = 0; }
	Number(int v) { value = v; }

	bool operator==(const Number& other) const {
		return (value == other.value);
	}
};
