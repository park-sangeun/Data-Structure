#include "List.h"
#include <cassert>

List::List(){
	head = 0;
	tail = 0;
	current = 0;
}
List::~List() { //�Ҹ��� ����
	while (head != 0) //head�� ������, head�� ���� ĭ���� �ű�-->�տ������� �ϳ��� ����
	{
		Link delNode = head;
		head = head->next;
		delete delNode;
	}
}
void List::insert(const ListElementType& elem)
{
	/*Link addedNode = new Node;
	assert(addedNode);
	addedNode->elem = elem;
	if (head == 0) {
		head = addedNode;
	}
	else {
		tail->next = addedNode;
	}
		tail = addedNode;
		addedNode->next = 0;*/

	Link addedNode = new Node; //�����ڷ� p.28 ����
	assert(addedNode);
	addedNode->elem = elem;
	if (head == 0) {
		addedNode->next = 0;
		tail = addedNode;
	}
	else
		addedNode->next = head;
	head = addedNode; //�������� �߻�, �ڷ� ���� ����
}

bool List::first(ListElementType& elem)
{
	if (head == 0) {
		return false;
	}
	else {
		elem = head->elem;
		current = head;
		return true;
	}
}
bool List::next(ListElementType& elem)
{
	assert(current);
	if (current->next == 0)
		return false;
	else {
		current = current->next;
		elem = current->elem;
		return true;
	}
}