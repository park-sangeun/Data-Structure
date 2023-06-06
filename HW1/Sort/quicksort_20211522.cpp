#include <iostream>
using namespace std;
#define nSize 9
//typedef int mytype;
// cx6-6.cpp
// Code Example 6-6: Quicksort
// Note: this quicksort function depends upon the partition function in cx6-7.cpp
void fillarray(int a[]);
void print(int a[]);
void quicksort(int a[], int first, int last);
int partition(int a[], int first, int last);
void swapElements(int a[], int first, int last); // see Exercise 5-12

int main () {
	int a[nSize];
	fillarray(a);
	int first = 0;
	int last = nSize - 1;
	quicksort(a, first, last);
	
	cout << endl;
	cout << "quickSort: ";
	print(a);

}
void fillarray(int a[]) {
	cout << "20211522 박상은" << endl;
	cout << "값을 쓰시오" << endl;
	for (int i = 0; i < nSize; i++) {
		cin >> a[i];
	}
}
void print(int a[]) {
	for (int i = 0; i < nSize; i++) {
		cout << a[i] << " ";
	}
}
void quicksort(int a[], int first, int last)
{
	// precondition: a is an array; 
	//    The portion to be sorted runs from index first to index last inclusive.
	if (first >= last) // Base Case --nothing to sort, so just return
		return;
	cout << "no partition: ";
	print(a);
	cout << endl;

	// Otherwise, we’re in the recursive case.
	// The partition function uses the item in a[first] as the pivot
	// and returns the position of the pivot --split --after the partition.
	int split(partition(a, first, last));

	cout << "partition: ";
	print(a);
	cout << endl;

	// Recursively, sort the two partitions.
	quicksort(a, first, split - 1);
	quicksort(a, split + 1, last);
	// postcondition: a is sorted in ascending order 
	// between first and last inclusive.

}


int partition(int a[], int first, int last)
{
	int lastSmall(first), i;
	for (i=first+1; i <= last; i++)
		// loop invariant: a[first+1]...a[lastSmall] <= a[first] &&
		//    a[lastSmall+1]...a[i-1] > a[first]

		if(a[i] <= a[first]) { // key comparison
			++lastSmall;
			swapElements(a, lastSmall, i);
		}
	swapElements(a, first, lastSmall); 
	// put pivot into correct position
	// postcondition: a[first]...a[lastSmall-1] <= a[lastSmall] &&
	//    a[lastSmall+1]...a[last] > a[lastSmall]
	return lastSmall; 
	// this is the final position of the pivot --the split index
}

void swapElements(int a[], int first, int last){
	int temp;
	temp = a[first];
	a[first] = a[last];
	a[last] = temp;
}
