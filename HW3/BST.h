#include "BinaryTree.h"

template < class btElementType >
class BST : public BinaryTree < btElementType > {
public:
	BST();
	virtual void insert(const btElementType& d);
	virtual BinaryTree < btElementType >* retrieve(const btElementType& d);
	virtual btElementType Delete();
	void Delete(btElementType d);
	using BinaryTree <btElementType>::nullTree;
	using BinaryTree <btElementType>::treeData;
	using BinaryTree <btElementType>::leftTree;
	using BinaryTree <btElementType>::rightTree;

};


template < class btElementType > 
BST < btElementType > ::BST() : BinaryTree < btElementType >()
{
}

template < class btElementType >
void BST < btElementType > ::insert(const btElementType& d)
{
	if (nullTree) {
		nullTree = false;
		leftTree = new BST;
		rightTree = new BST;
		treeData = d;
	}
	else if (d == treeData)
		treeData = d;
	else if (d < treeData)
		leftTree->insert(d);
	else
		rightTree->insert(d);
}

template < class btElementType >
void BST<btElementType>::Delete(btElementType d)
{
	BST* Node = this;
	while (Node->treeData != d) {
		if (Node->treeData > d)
			Node = BST * Node->leftTree;
		else
			Node = BST * Node->rightTree;
	}
	if (Node->nullTree == True)
		std::cout << '¾ø´Ù';
	else
		Node->Delete();
}

template < class btElementType >
int BST<btElementType>::Delete() {
	BST* Node = this;
	if (Node->leftTree->nullTree == false) {
		Node = (BST*)Node->leftTree;
		while (Node->right->nullTree == false)
			Node = (BST*)Node->rightTree;
		this->treeData = Node->treeData;
		if (Node->leftTree->nullTree != NULL)
			Node->Delete();
	}
	else if (Node->rightTree->nullTree == false) {
		Node = (BST*)Node->rightTree;
		while (Node->leftTree->nullTree == false)
			Node = (BST*)Node->leftTree;
		this->treeData = Node->treeData;
		if (Node->rightTree->nullTree == false)
			Node->Delete();
	}
	else
		this->treeData = 0;
}

template < class btElementType >
BinaryTree < btElementType >* BST < btElementType> ::retrieve(const btElementType& d)
{
	if (nullTree || d == treeData)
		return this;
	else if (d < treeData)
		return ((BST<btElementType>*)leftTree)->retrieve(d);
	else
		return ((BST<btElementType>*)rightTree)->retrieve(d);
}