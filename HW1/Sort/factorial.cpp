
#include <iostream>
using namespace std;
int Fact(int n);

int main()
{
    int n;
    cout << "20211522 박상은" << endl;
    cout << "n: ";
    cin >> n;
    cout << Fact(n);

}

int Fact(int n) {
    if (n == 1)
        return 1;
    else {
        return n * Fact(n - 1);
    }
}
