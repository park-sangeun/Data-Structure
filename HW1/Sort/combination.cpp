
#include <iostream>
using namespace std;
int comb_fact(int n, int k);
int fact(int n);
int choose(int n, int k);

int main()
{
    cout << "20211522 박상은" << endl;
    int n, k;
    cout << "input total n: ";
    cin >> n;
    cout << "input select k: ";
    cin >> k;
    
    cout << "recursion: " << choose(n, k) << endl;
    cout<<"factorial: "<< comb_fact(n, k);
}

int choose(int n, int k)
{
    if (k == 1) {
        return n;
    }
    else if (n == k) {
        return 1;
    }
    else // recursive case: n>k and k>1
        return choose(n - 1, k - 1) + choose(n - 1, k);
}


int fact(int n) {

    if (n == 0) {
        return 1;
    }
    else
        return n * fact(n - 1);
}

int comb_fact(int n, int k) {
    
    return fact(n) / (fact(k) * fact(n - k));
}