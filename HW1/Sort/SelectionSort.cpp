#include <iostream>
using namespace std;

void fillArray(int *a, int size, int& numberUsed);
void selectionSort(int a[], int n);
void swapValues(int& v1, int& v2);
int maxSelect(int a[], int n);

const int NSIZE = 10;

int main()
{
    cout << "20211522 박상은(내림차순)" << endl;
    cout << "Sorting program" << endl;
    int sampleArray[NSIZE], numberUsed;
    fillArray(sampleArray, NSIZE, numberUsed);
    selectionSort(sampleArray, numberUsed);

    cout << "Sorted results" << endl;
    for (int index = 0; index < numberUsed; index++)
        cout << sampleArray[index] << " ";
    cout << endl;

    return 0;
}

void fillArray(int *a, int size, int& numberUsed)
{
    cout << " enter up to " << size << " nonnegative whole numbers" << endl
        << "Mark the end of the list with a negative number" << endl;
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && (index < size))
    {
        a[index] = next;
        index++;
        cin >> next;
    }
    numberUsed = index;
}

void selectionSort(int a[], int n)
{
    int last(n-1);
    int maxPos;
    while (last > 0 )
    {
        maxPos = maxSelect(a, last+1);
        swapValues(a[maxPos], a[last]);
        last--;
    }
}
void swapValues(int& v1, int& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}

int maxSelect(int a[], int n)
{
    int maxPos(0), currentPos(1);
    while (currentPos < n) {
        // Invariant: a[maxPos] >= a[0] ... a[currentPos-1]
        if (a[currentPos] < a[maxPos])
            maxPos = currentPos;
        currentPos++;
    }
    return maxPos;
}
