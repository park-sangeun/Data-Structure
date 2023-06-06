#include "Stack.h"
#include <cassert>

template <class StackElementType>
Stack<StackElementType>::Stack()
{
	head = 0;
}

template <class StackElementType>
void Stack<StackElementType>::push(StackElementType e)
{
	Link addedNode = new Node;
	assert(addedNode);
	addedNode->data = e;
	addedNode->next = head;
	head = addedNode;
}

template <class StackElementType>
StackElementType Stack<StackElementType>::top()
{
	assert(isEmpty());
	StackElementType e;
	e = head->data;
	return e;
}

template <class StackElementType>
StackElementType Stack<StackElementType>::pop()
{
	assert(isEmpty());
	StackElementType e;
	e = head->data;
	Link delNode = head;
	head = head->next;
	delete delNode;
	return e;
}

template <class StackElementType>
bool Stack<StackElementType>::isEmpty()
{
	return bool(head == 0);
}