template<class StackElementType>
class Stack
{
public:
	Stack();
	void push(StackElementType e);
	StackElementType pop();
	StackElementType top();
	bool isEmpty();
private:
	struct Node;
	typedef Node* Link;
	struct Node {
		StackElementType elem;
		Link next;
	};
	Link head;
};

