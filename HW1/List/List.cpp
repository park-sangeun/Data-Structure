#include "List.h"
#include <cassert>

List::List(){
	head = 0;
	tail = 0;
	current = 0;
}
List::~List() { //소멸자 생성
	while (head != 0) //head를 버리고, head를 다음 칸으로 옮김-->앞에서부터 하나씩 제거
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

	Link addedNode = new Node; //강의자료 p.28 내용
	assert(addedNode);
	addedNode->elem = elem;
	if (head == 0) {
		addedNode->next = 0;
		tail = addedNode;
	}
	else
		addedNode->next = head;
	head = addedNode; //공통으로 발생, 뒤로 빼준 것임
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