#pragma once
#include <cassert>

const int maxQueue = 200;
template <class queueElementType>
class Queue
{
public:
	Queue();
	~Queue();
	void enqueue(queueElementType e);
	queueElementType dequeue();
	queueElementType front();
	bool isEmpty();
	bool isFull();
private:
	int f;
	int r;
	int nElements;
	queueElementType elements[maxQueue];
};

int nextPos(int p)
{
	if (p == maxQueue - 1)
		return 0;
	else
		p + 1;
}

template <class queueElementType>
Queue<queueElementType>::Queue()
{
	f = 0;
	r = 0;
	nElements = 0;
}

template <class queueElementType>
Queue<queueElementType>::~Queue()
{
}

template <class queueElementType>
void Queue<queueElementType>::enqueue(queueElementType e)
{
	//assert(nextPos(r) != f);
	assert(!isFull());
	r = nextPos(r);
	elements[r] = e;
	nElements++;
}

template <class queueElementType>
queueElementType Queue<queueElementType>::dequeue()
{
	//assert(f!=r);
	assert(!isEmpty());
	queueElementType e = elements[f];
	f = nextPos(f);
	nElements--;
	//return elements[f];
	return e;
}

template <class queueElementType>
queueElementType Queue<queueElementType>::front()
{
	assert(f != r);
	return elements[nextPos(f)];
}

template <class queueElementType>
bool Queue<queueElementType>::isEmpty()
{
	//return bool(f == r);
	return bool(nElements == 0);
}

template <class queueElementType>
bool Queue<queueElementType>::isFull()
{
	//return bool(nextPos(r) == f);
	return bool(nElements == maxQueue);
}